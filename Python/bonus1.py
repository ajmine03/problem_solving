import sqlite3
from datetime import datetime
from tabulate import tabulate


# ==============================
# DATABASE SETUP
# ==============================
def init_db():
    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()
    cur.execute("""
        CREATE TABLE IF NOT EXISTS expenses (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            date TEXT NOT NULL,
            category TEXT NOT NULL,
            description TEXT,
            amount REAL NOT NULL
        )
    """)
    conn.commit()
    conn.close()


# ==============================
# ADD EXPENSE
# ==============================
def add_expense():
    date_str = input("Enter date (YYYY-MM-DD) or leave blank for today: ")
    if not date_str:
        date_str = datetime.now().strftime("%Y-%m-%d")
    category = input("Enter category (Food, Transport, Bills, etc.): ")
    description = input("Enter description: ")
    amount = float(input("Enter amount: "))

    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()
    cur.execute("INSERT INTO expenses (date, category, description, amount) VALUES (?, ?, ?, ?)",
                (date_str, category, description, amount))
    conn.commit()
    conn.close()
    print("✅ Expense added successfully!")


# ==============================
# VIEW EXPENSES
# ==============================
def view_expenses():
    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()
    cur.execute("SELECT * FROM expenses")
    rows = cur.fetchall()
    conn.close()

    if rows:
        print(tabulate(rows, headers=["ID", "Date", "Category", "Description", "Amount"], tablefmt="fancy_grid"))
    else:
        print("No expenses found.")


# ==============================
# DELETE EXPENSE
# ==============================
def delete_expense():
    view_expenses()
    expense_id = input("Enter the ID of the expense to delete: ")

    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()
    cur.execute("DELETE FROM expenses WHERE id=?", (expense_id,))
    conn.commit()
    conn.close()
    print("🗑 Expense deleted successfully!")


# ==============================
# UPDATE EXPENSE
# ==============================
def update_expense():
    view_expenses()
    expense_id = input("Enter the ID of the expense to update: ")

    date_str = input("Enter new date (YYYY-MM-DD) or leave blank to keep current: ")
    category = input("Enter new category or leave blank to keep current: ")
    description = input("Enter new description or leave blank to keep current: ")
    amount_str = input("Enter new amount or leave blank to keep current: ")

    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()

    cur.execute("SELECT * FROM expenses WHERE id=?", (expense_id,))
    expense = cur.fetchone()
    if not expense:
        print("❌ Expense not found.")
        return

    new_date = date_str if date_str else expense[1]
    new_category = category if category else expense[2]
    new_description = description if description else expense[3]
    new_amount = float(amount_str) if amount_str else expense[4]

    cur.execute("""
        UPDATE expenses
        SET date=?, category=?, description=?, amount=?
        WHERE id=?
    """, (new_date, new_category, new_description, new_amount, expense_id))

    conn.commit()
    conn.close()
    print("✏ Expense updated successfully!")


# ==============================
# MONTHLY SUMMARY
# ==============================
def monthly_summary():
    month = input("Enter month (YYYY-MM): ")

    conn = sqlite3.connect("expenses.db")
    cur = conn.cursor()
    cur.execute("""
        SELECT category, SUM(amount) 
        FROM expenses
        WHERE strftime('%Y-%m', date) = ?
        GROUP BY category
    """, (month,))
    rows = cur.fetchall()
    conn.close()

    if rows:
        print("\n📊 Monthly Expense Summary:")
        print(tabulate(rows, headers=["Category", "Total Amount "], tablefmt="fancy_grid"))
    else:
        print("No expenses found for this month.")


# ==============================
# MAIN MENU
# ==============================
def main():
    init_db()
    while True:
        print("\n========== Personal Expense Tracker ==========")
        print("1. Add Expense")
        print("2. View All Expenses")
        print("3. Update Expense")
        print("4. Delete Expense")
        print("5. Monthly Summary")
        print("6. Exit")
        choice = input("Enter choice: ")

        if choice == "1":
            add_expense()
        elif choice == "2":
            view_expenses()
        elif choice == "3":
            update_expense()
        elif choice == "4":
            delete_expense()
        elif choice == "5":
            monthly_summary()
        elif choice == "6":
            print("👋 Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
