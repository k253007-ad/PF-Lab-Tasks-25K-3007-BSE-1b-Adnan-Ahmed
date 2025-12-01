#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n = 100,i;
    
    char *arr = (char*)malloc(sizeof(char) * n);
    
    printf("Enter the text : ");
    scanf("%[^\n]", arr);
    
    n = strlen(arr);
    
    int start = 0;
    int end = n - 1;
    
    while(start < end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    printf("\nInverse text : \n\n");
    
    for(i = 0; i < n; i++){
        printf("%c",*(arr+i));
    }
    
    free(arr);
    arr = NULL;
    
    return 0;
}
