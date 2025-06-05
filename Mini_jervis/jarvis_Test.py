import speech_recognition as sr
import pyttsx3
import webbrowser
import datetime
import requests # For weather API
import json     # For parsing weather API response

# --- CONFIGURATION ---
# (User should replace with their actual API key and preferred city)
WEATHER_API_KEY = "YOUR_OPENWEATHERMAP_API_KEY"  # REPLACE THIS!
WEATHER_CITY = "Dhaka" # Replace with your city, or ask the user
NEWS_URL = "https://www.bbc.com/news" # Example daily news site

# Initialize recognizer and TTS engine
recognizer = sr.Recognizer()
engine = pyttsx3.init()

# You might want to adjust voice properties (optional)
# voices = engine.getProperty('voices')
# engine.setProperty('voice', voices[0].id) # Change index for different voices if available
# engine.setProperty('rate', 150) # Speed of speech

def speak(text):
    """Converts text to speech."""
    print(f"Assistant: {text}")
    engine.say(text)
    engine.runAndWait()

def listen():
    """Listens for a command and returns it as text."""
    with sr.Microphone() as source:
        print("Listening...")
        recognizer.pause_threshold = 1
        recognizer.adjust_for_ambient_noise(source, duration=1)
        audio = recognizer.listen(source)

    try:
        print("Recognizing...")
        command = recognizer.recognize_google(audio, language='en-US') # Using Google Web Speech API
        print(f"User said: {command}\n")
    except sr.UnknownValueError:
        speak("Sorry, I did not understand that.")
        return "None"
    except sr.RequestError as e:
        speak(f"Could not request results from Google Speech Recognition service; {e}")
        return "None"
    except Exception as e:
        speak(f"An unknown error occurred during listening: {e}")
        return "None"
    return command.lower()

def get_weather(city_name, api_key):
    """Fetches weather information from OpenWeatherMap API."""
    if api_key == "YOUR_OPENWEATHERMAP_API_KEY":
        return "Weather API key not configured. Please set it up in the script."

    base_url = "http://api.openweathermap.org/data/2.5/weather?"
    complete_url = base_url + "appid=" + api_key + "&q=" + city_name + "&units=metric" # units=metric for Celsius

    try:
        response = requests.get(complete_url)
        response.raise_for_status() # Raise an exception for HTTP errors (4xx or 5xx)
        weather_data = response.json()

        if weather_data["cod"] != "404":
            main_data = weather_data["main"]
            current_temperature = main_data["temp"]
            current_pressure = main_data["pressure"]
            current_humidity = main_data["humidity"]
            weather_description = weather_data["weather"][0]["description"]

            report = (f"Currently in {city_name}, the temperature is {current_temperature}° Celsius, "
                      f"with {weather_description}. Humidity is at {current_humidity} percent.")
            return report
        else:
            return f"Sorry, I couldn't find weather data for {city_name}."
    except requests.exceptions.HTTPError as http_err:
        return f"HTTP error occurred while fetching weather: {http_err}"
    except requests.exceptions.ConnectionError:
        return "Error: Could not connect to the weather service. Please check your internet connection."
    except Exception as e:
        return f"An error occurred while fetching weather: {e}"

# --- Main Loop ---
if __name__ == "__main__":
    speak("Hello! I am your assistant. How can I help you?")

    while True:
        command = listen()

        if command == "None": # If nothing was understood or an error occurred
            continue

        # Navigation Commands
        if "open youtube" in command:
            speak("Opening YouTube.")
            webbrowser.open("https://www.youtube.com")
        elif "open github" in command:
            speak("Opening GitHub.")
            webbrowser.open("https://www.github.com")
        elif "open facebook" in command:
            speak("Opening Facebook.")
            webbrowser.open("https://www.facebook.com")
        elif "open daily news" in command or "open news" in command: # "daily using browser opener"
            speak(f"Opening {NEWS_URL.split('//')[-1].split('/')[0]} for your daily news.") # Extracts domain name for speaking
            webbrowser.open(NEWS_URL)

        # Information Commands
        elif "what's the time" in command or "what time is it" in command:
            now = datetime.datetime.now().strftime("%I:%M %p") # e.g., "05:30 PM"
            speak(f"The current time is {now}.")
        elif "what's the weather" in command or "how is the weather" in command:
            # You could make this more dynamic, e.g., ask "weather in which city?"
            # For now, it uses the pre-configured WEATHER_CITY
            speak(f"Getting the weather for {WEATHER_CITY}.")
            weather_report = get_weather(WEATHER_CITY, WEATHER_API_KEY)
            speak(weather_report)
        elif "weather in" in command: # Allows asking for weather in a specific city
            try:
                city = command.split("weather in ")[-1].strip()
                if city:
                    speak(f"Getting the weather for {city}.")
                    weather_report = get_weather(city, WEATHER_API_KEY)
                    speak(weather_report)
                else:
                    speak("Which city's weather are you asking about?")
            except Exception as e:
                speak("Sorry, I couldn't determine the city from your command.")
                print(f"Error parsing city: {e}")

        # Basic Conversation
        elif "hello" in command or "hi" in command:
            speak("Hello there! How can I assist you today?")
        elif "what's your name" in command or "who are you" in command:
            speak("I am your helpful Python assistant.")
        elif "tell me a joke" in command:
            speak("Why did the scarecrow win an award? Because he was outstanding in his field!")

        # Exit Command
        elif "exit" in command or "bye" in command or "quit" in command or "goodbye" in command:
            speak("Goodbye! Have a great day.")
            break
        else:
            # Check if it was just noise or an unrecognised command
            if command and command != "None":
                speak("Sorry, I didn't catch that or I can't do that yet. Can you please repeat or try another command?")