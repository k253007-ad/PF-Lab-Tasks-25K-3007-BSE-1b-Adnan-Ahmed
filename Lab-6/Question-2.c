#include <stdio.h>
int main()
{
    int a,b,i,j;
    
    int x = 0;
    float y = 0;
    
    a = 36;
    b = 6;
    j = a;
    
    for (i=1; i<=b; i++){
      x += a;
      
    }
    
    while(j > 0){
      j -= b;
      
      y += 1;
      
    }
    
    
    
    printf("%d",x);
    printf("\n%f",y);

    return 0;
    
}