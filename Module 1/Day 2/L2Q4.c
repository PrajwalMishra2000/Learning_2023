#include <stdio.h>

char* xstrchr(const char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;  // Found the character, return pointer to it
        }
        str++;
    }
    
    return NULL;  // Character not found, return NULL
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char ch;
    printf("Enter a character to search for: ");
    scanf(" %c", &ch);
    
    char* result = xstrchr(str, ch);
    if (result != NULL) {
        printf("Character '%c' found at position %ld.\n", ch, result - str);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
    
    return 0;
}
