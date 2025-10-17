#include <stdio.h>

int main() {
    int i,array[100];
    int n,store[100];
    
    printf("Enter no of Elements of the Array : ");
    scanf("%d",&n);
    
    array[100] = array[n];
    store[100] = store[n];
    
    for(i=0; i<n; i++){
        printf("Enter %d Element of array : ",i+1);
        scanf("%d", &array[i]);
        
    }
    
    for (i = 0; i < n; i++){
        store[i] = array[i];
    }
    array[0] = store[4];
    for (i = 0; i < (n-1); i++){
        array[i+1] = store[i];
    }
    for (i = 0; i<n; i++){
        printf("\n%d ", array[i]);
    }
    return 0;
}