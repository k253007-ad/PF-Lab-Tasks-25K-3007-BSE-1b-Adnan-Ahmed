#include <stdio.h>

int main() {
    int a,i, sum = 0 ;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    i = a;
    
    for(i=a; i>0; i /= 10){
        
        sum +=  i % 10;
    }
    
    printf("Sum of individual numbers is :%d",sum);
    
    return 0;
}