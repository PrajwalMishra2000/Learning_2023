#include <stdio.h>

// Function to count the number of set bits in a number
int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    unsigned int arr[size];
    printf("Enter the elements of the array (in hexadecimal format): ");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
