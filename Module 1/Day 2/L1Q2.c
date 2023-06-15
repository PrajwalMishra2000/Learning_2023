#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to swap two values of any type
void swap(void *a, void *b, size_t size) {
    char *temp = malloc(size);  // Allocate temporary memory

    // Copy the contents of 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy the contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the contents of 'temp' to 'b'
    memcpy(b, temp, size);

    free(temp);  // Deallocate temporary memory
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap two integers
    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    double x, y;
    printf("Enter two doubles: ");
    scanf("%lf %lf", &x, &y);
    printf("Before swap: x = %lf, y = %lf\n", x, y);

    // Swap two doubles
    swap(&x, &y, sizeof(double));

    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}

