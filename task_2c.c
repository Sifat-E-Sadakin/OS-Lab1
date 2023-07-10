#include <stdio.h>
#include <string.h>

int hasLowerCase(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            return 1;
        }
    }
    return 0;
}

int hasUpperCase(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            return 1;
        }
    }
    return 0;
}

int hasDigit(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            return 1;
        }
    }
    return 0;
}

int hasSpecialChar(const char* str) {
    int length = strlen(str);
    const char specialChars[] = { '_', '$', '#', '@' };
    int numSpecialChars = sizeof(specialChars) / sizeof(specialChars[0]);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < numSpecialChars; j++) {
            if (str[i] == specialChars[j]) {
                return 1;
            }
        }
    }
    return 0;
}


int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    int isLower = hasLowerCase(input);
    int isUpper = hasUpperCase(input);
    int isDigit = hasDigit(input);
    int isSpecial = hasSpecialChar(input);

    if (isLower && isUpper && isDigit && isSpecial) {
        printf("OK\n");
    }
    if(!isLower){
        printf("Lowercase missing \n");
        
    }
    if(!isUpper){
        printf("Uppercase missing \n");
    }
    if(!isDigit){
        printf("Digit missing \n");
    }
    if(!isSpecial ) {
        printf("Spacial character missing\n");
    }

    return 0;
}



