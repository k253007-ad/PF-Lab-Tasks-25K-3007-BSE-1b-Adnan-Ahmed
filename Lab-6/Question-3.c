#include <stdio.h>
int main()
{
    int a,i,j,sum,x,y;
    
    printf("Enter a Number : \n");
    scanf("%d",&a);
    
    x = a;
    y = a % 10;
    for(i = 10; i <= x; i ){
      x /= 10;
    }
    
    sum = x + y;
    
    printf("\nFirst digit : \n%d",x);
    printf("\nLast digit : \n%d",y);
    printf("\nSum is : \n%d",sum);
    return 0;
    
}