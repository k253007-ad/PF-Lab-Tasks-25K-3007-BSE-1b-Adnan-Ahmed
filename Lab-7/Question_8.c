#include <stdio.h>

int main() {
    int i;
    char a[100];
    
    printf("Enter Characters : ");
    scanf("%[^\n]",a);
    
    for (i = 0; a[i] != '\0'; i++) {
        if(!(a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')){
            printf("%c", a[i]);
        }
    }
    
    return 0;
}
