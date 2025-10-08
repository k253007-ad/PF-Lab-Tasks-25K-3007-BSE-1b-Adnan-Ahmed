#include <stdio.h>

int main() {
    int a,i, sum = 0 ;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    for(i=1; i<a; i++){
        
        if (a % i == 0){
            sum += i;
        }
        
    }
    
    if( sum == a ){
        printf("It is a Perfect Number");
    }
    else{
        printf("It is not a Perfect Number");
    }
    
    return 0;
}