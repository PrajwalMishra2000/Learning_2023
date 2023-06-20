#include <stdio.h>

int main() {
    double x;

    printf("Enter a double number: ");
    scanf("%lf", &x);

    // Interpret the double as an unsigned long long
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long bits = *ptr;

    // Extract the exponent part
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent in hex: 0x%llX\n", exponent);

    // Print the exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");

    return 0;
}
