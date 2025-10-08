#include <stdio.h>

int main() {
  int a,i,p=0;
    
  printf("Enter a prime number : \n");
  scanf("%d",&a);
  
  
   for(i=1; i<=a; i++){
  
    if((a % i) == 0){
        p++;
    }
    
   }
    
  if(p == 2){
    printf("\nprime number");
    
  }else{
    printf("\nnot a prime number");
  }
    return 0;
}