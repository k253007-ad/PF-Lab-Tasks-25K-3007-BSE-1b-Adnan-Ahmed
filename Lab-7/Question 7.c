#include <stdio.h>

int main() {
    int a[10], seen[10000] = {0}, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        if (seen[a[i]] == 1)
            a[i] = -1;
        else
            seen[a[i]] = 1;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
