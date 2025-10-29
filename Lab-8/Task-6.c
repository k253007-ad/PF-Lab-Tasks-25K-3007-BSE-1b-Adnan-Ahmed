#include <stdio.h>

int main() {
    int n,i,j,k;
    
    char letters[5] = {'A','B','C','D','E'};
    
    printf("Enter Height : ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        for(j = n; j >= 1; j--){
            if(j <= i) printf(" *");
            else printf("  ");
        }
        printf("  |  ");
        
        for(j = n, k = 1; j >= 1; j--){
            if(j <= i) {
                printf(" %d",k);
                k++;
            }
            else printf("  ");
        }
        
        printf("  |  ");
        
        for(j = n, k = 0; j >= 1; j--){
            if(j <= i) {
                printf(" %c",letters[k]);
                k++;
            }
            else printf("  ");
        }
        
        printf("\n");
    }
    
    return 0;
}
