#include <stdio.h>
#include <math.h>

// Function to convert base-N to base-10
int baseN_to_base10(int digits[], int length, int baseN) {
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += digits[i] * pow(baseN, length - 1 - i);
    }
    return result;
}

// Function to convert base-10 to base-M
void base10_to_baseM(int decimal, int baseM) {
    int result[64]; // supports large base values
    int index = 0;

    while (decimal > 0) {
        result[index++] = decimal % baseM;
        decimal /= baseM;
    }

    printf("Converted to base-%d: ", baseM);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int baseN, baseM, digits[10], length;

    printf("Enter source base (N): ");
    scanf("%d", &baseN);

    printf("Enter target base (M): ");
    scanf("%d", &baseM);

    printf("Enter number of digits: ");
    scanf("%d", &length);

    printf("Enter digits (most significant to least): ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &digits[i]);
    }

    int decimal = baseN_to_base10(digits, length, baseN);
    printf("Decimal value: %d\n", decimal);
    base10_to_baseM(decimal, baseM);

    return 0;
}
