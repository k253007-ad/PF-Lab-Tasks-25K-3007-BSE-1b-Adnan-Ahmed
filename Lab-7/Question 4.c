#include <stdio.h>

int main() {
    char msg[200];
    int  k = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", msg);

    while (msg[k] != '\0') {
        if (msg[k] >= 'a' && msg[k] <= 'z') {
            msg[k] = msg[k] - 32;
        }
        else if (msg[k] >= 'A' && msg[k] <= 'Z') {
            msg[k] = msg[k] + 32;
        }
        k++;
    }

    printf("Converted message: %s\n", msg);
    return 0;
}
