#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n = 5 ,i;
    
    int *arr = (int*)calloc(n, sizeof(int));
    
    printf("\nCalloc array initialized : \n\n");
    
    for(i = 0; i < n; i++){
        printf("%d . %d\n",i+1, arr[i]);
    }
    
    printf("\nChanging values : \n\n");
    
    for(i = 0; i < n; i++){
        arr[i] = 10 * i;
        printf("%d . %d\n", i+1, arr[i]);
    }
    
    free(arr);
    arr = NULL;
    
    printf("\nArray freed :\n");
    
    arr = (int*)malloc(sizeof(int) * n);
    
    printf("\n\nMalloc array initialized : \n\n");
    
    for(i = 0; i < n; i++){
        printf("%d . %d\n",i+1, arr[i]);
    }
    
    printf("\nChanging values : \n\n");
    
    for(i = 0; i < n; i++){
        arr[i] = (i + 1) * 5;
        printf("%d . %d\n", i+1, arr[i]);
    }
    
    free(arr);
    arr = NULL;
    
    return 0;
}
