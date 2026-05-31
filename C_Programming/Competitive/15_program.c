//Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not
#include <stdio.h>
#include <stdbool.h> // For bool type, or use int

bool CheckVowel(char cValue) {
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
        cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U') {
        return true;
    } else {
        return false;
    }
}

int main() {
    char cValue = '\0';
    printf("Enter character\n");
    scanf(" %c", &cValue);
    
    if (CheckVowel(cValue)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    return 0;
}