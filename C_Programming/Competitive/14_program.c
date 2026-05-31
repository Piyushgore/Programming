//Accept one character from user and convert case of that character
#include <stdio.h>

void DisplayConvert(char CValue) {
    if (CValue >= 'a' && CValue <= 'z') {
        // Convert lowercase to uppercase
        printf("%c", CValue - 32);
    } else if (CValue >= 'A' && CValue <= 'Z') {
        // Convert uppercase to lowercase
        printf("%c", CValue + 32);
    } else {
        // Not an alphabet, print as is
        printf("%c", CValue);
    }
}

int main() {
    char cValue = '\0';
    printf("Enter character\n");
    scanf(" %c", &cValue); // Space before %c to skip whitespace
    DisplayConvert(cValue);
    return 0;
}