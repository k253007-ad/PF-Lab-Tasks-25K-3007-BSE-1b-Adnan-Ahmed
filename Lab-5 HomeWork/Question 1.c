#include <stdio.h>

int main() {

    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if (age < 5) {
        printf("\nfree");
    }
    else if (age > 65) {
        printf("\nDiscount");
    }
    else {
        printf("\nStandard");
    }
    
    
    return 0;
}