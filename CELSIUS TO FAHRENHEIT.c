#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temp, converted;

    printf("Temperature Converter\n");
    printf("----------------------\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = celsiusToFahrenheit(temp);
        printf("%.2f ?C = %.2f ?F\n", temp, converted);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = fahrenheitToCelsius(temp);
        printf("%.2f ?F = %.2f ?C\n", temp, converted);
    } 
    else {
        printf("Invalid choice! Please run the program again and choose 1 or 2.\n");
    }

    return 0;
}

