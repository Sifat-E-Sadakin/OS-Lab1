#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLastThreeDigitsCom(char *str) {
    int length = strlen(str);

    // Check if the string has at least three characters
    if (length >= 3) {
        const char* lastThreeDigits = str + length - 9;
        return strcmp(lastThreeDigits, "sheba.xyz") == 0;
    }

    return false;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isLastThreeDigitsCom(input))
        printf("Email address is okay\n");
    else
        printf("Email address is outdated\n");

    return 0;
}
