#include <stdio.h>

int main() {
    int a,i,e=0,o=0;
    
    for(i=1; i<=10; i++){
        
        printf("Enter %d number: ",i);
        scanf("%d",&a);
        
        if((a % 2) == 0){ e++; }
        else{ o++; }
        
    }
    
    printf("%d are even and %d are odd",e,o);
    
    return 0;
}