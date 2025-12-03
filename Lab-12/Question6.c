#include <stdio.h>

int dRoot(int n) {
    if (n < 10)
        return n;

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return dRoot(sum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int root = dRoot(num);
    
    printf("Digital root = %d\n", root);

    return 0;
}
