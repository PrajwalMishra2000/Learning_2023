#include <stdio.h>

unsigned char setBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num | mask;
}

unsigned char clearBit(unsigned char num, int position) {
    unsigned char mask = ~(1 << position);
    return num & mask;
}

unsigned char toggleBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num ^ mask;
}

int main() {
    unsigned char num = 0b01101001;  // Example number: 105

    // Set bit at position 2
    num = setBit(num, 2);
    printf("After setting bit 2: %d\n", num);  // Output: 105 (unchanged)

    // Clear bit at position 6
    num = clearBit(num, 6);
    printf("After clearing bit 6: %d\n", num);  // Output: 41

    // Toggle bit at position 3
    num = toggleBit(num, 3);
    printf("After toggling bit 3: %d\n", num);  // Output: 33

    return 0;
}
