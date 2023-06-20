#include <stdio.h>

int main() {
    int n, i, j, num;
    int smallest = 9, largest = 0;
    int valid = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Iterate through each number
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the number is valid (positive and within range)
        if (num <= 0) {
            valid = 0;
            break;
        }

        // Find the smallest and largest digits
        while (num > 0) {
            int digit = num % 10;
            if (digit < smallest)
                smallest = digit;
            if (digit > largest)
                largest = digit;
            num /= 10;
        }
    }

    // Print the results
    if (valid) {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    } else {
        printf("Not Valid\n");
    }

    return 0;
}
