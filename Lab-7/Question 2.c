#include <stdio.h>

int main() {
    int i,array[10];
    int n,times = 0;
    
    for(i=0; i<10; i++){
        printf("Enter %d Element of array : ",i+1);
        scanf("%d", &array[i]);
    }
    printf("Enter the Number to find : ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++){
        if(n == array[i]){
            times += 1;
        }
    }
    
    if(times > 0){
        printf("%d is repeated %d times.",n,times);
    }else{
        printf("number not found");
    }
    return 0;
}
