#include <stdio.h>

int main() {
    char word[100];
    int v = 0, c = 0, i = 0;

    scanf("%s", word);

    while (word[i] != '\0') {
        char ch = word[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            v++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            c++;
        i++;
    }

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
