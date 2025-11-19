#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n, run = 1;
    char str[40];
    
    while ( run == 1 ){
        
        printf("\nType a Message : ");
        scanf("%[^\n]",str);
        
        n = strlen(str);
        
        str[n] = '\0';
        
        printf("\nOriginal: %s",str);
        
        for(i = 0; i < n; i++){
            if(str[i] != ' ') str[i] += 3;
        }
        
        printf("\nEncrypted: %s",str);
        
        for(i = 0; i < n; i++){
            if(str[i] != ' ') str[i] -= 3;
        }
        
        printf("\nDecrypted: %s",str);
        
        printf("\n\nType 1 to Retry or 0 to Exit\n");
        scanf("%d",&run);
    }
    
    printf("\n\nIt dosent repeat sometimes");
    
    return 0;
}
