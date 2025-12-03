#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    char *result;

    printf("Enter first string: ");
    fgets(str1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(s2), stdin);
  
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

    strcpy(result, s1);
    strcat(result, s2);

    printf("\nConcatenated string: %s\n", result);

    free(result);

    return 0;
}
