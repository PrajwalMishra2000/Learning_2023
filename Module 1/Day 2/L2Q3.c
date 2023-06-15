#include <stdio.h>
#include <string.h>

int main() {
    int size;
    printf("Enter the number of names: ");
    scanf("%d", &size);

    char *names[size];
    printf("Enter the names:\n");
    for (int i = 0; i < size; i++) {
        char buffer[100];
        scanf("%s", buffer);
        names[i] = strdup(buffer);
    }

    // Sorting the names in alphabetical order using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Printing the names in alphabetical order
    printf("Names in alphabetical order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }

    // Freeing the dynamically allocated memory
    for (int i = 0; i < size; i++) {
        free(names[i]);
    }

    return 0;
}
