#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        if (*start != *end)
            return false;

        start++;
        end--;
    }

    return true;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isPalindrome(input))
        printf("palindrome.\n");
    else
        printf("not a palindrome.\n");

    return 0;
}
