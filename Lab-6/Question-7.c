#include <stdio.h>

int main() {
    int a,i, sum = 0 ;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    printf("Reverse number: ");
    
    i = a;
    
    for(i=a; i>0; i /= 10){
        
        printf("%d",i % 10);
    }
    
    return 0;
}