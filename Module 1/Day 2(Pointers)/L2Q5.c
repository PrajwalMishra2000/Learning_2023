#include <stdio.h>
#include <string.h>

void encodeString(char* str) {
    char key = 'X'; // Encryption key
    
    // Iterate over each character in the string
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] ^ key; // XOR the character with the key
    }
}

void decodeString(char* str) {
    char key = 'X'; // Decryption key
    
    // Iterate over each character in the string
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i] ^ key; // XOR the character with the key
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    // Encoding the string
    encodeString(str);
    printf("Encoded string: %s\n", str);
    
    // Decoding the string
    decodeString(str);
    printf("Decoded string: %s\n", str);
    
    return 0;
}
