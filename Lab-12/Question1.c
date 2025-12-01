#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n,i;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    int *arr = (int*)malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){
        printf("\nEnter the value of %d Element : ", i+1);
        scanf("%d",&*(arr+i));
    }
    
    printf("\n\nYour Elements are : \n\n");
    
    for(i = 0; i < n; i++){
        printf("%-2d: %d\n", i+1, *(arr+i));
    }
    
    free(arr);
    arr = NULL;
    
    return 0;
}
