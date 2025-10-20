#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int p = 0, f = 0;
    int mark, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if (mark == -1) break;
        if (mark >= 5) {
            pass[p] = mark;
            p++;
        } else {
            fail[f] = mark;
            f++;
        }
    }

    for (i = 0; i < p; i++) printf("%d ", pass[i]);
    printf("\n");
    for (i = 0; i < f; i++) printf("%d ", fail[i]);

    return 0;
}
