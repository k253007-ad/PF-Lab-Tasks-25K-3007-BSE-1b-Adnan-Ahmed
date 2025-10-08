#include <stdio.h>

int main() {
    int a,i,j,p=0;
    
    a = 66;
    
    printf("1");
    for(i=1; i<=a; i++){
        
        for(j=1; j<=i; j++){
            
            if((i % j) == 0){
                p++;
            }
            
        }
        
        if(p == 2){
            printf("\n%d",i);
            
        }
        p = 0;
        
    }
    
    return 0;
}