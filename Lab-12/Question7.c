#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPal(char s[], int start, int end) {

    if (start >= end)
        return 1;

    if (tolower(s[start]) != tolower(s[end]))
        return 0;

    return isPal(s, start + 1, end - 1);
}

int main() {
    char s[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    if (isPal(s, 0, strlen(s) - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
