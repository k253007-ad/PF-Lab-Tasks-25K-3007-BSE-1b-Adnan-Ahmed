#include <stdio.h>

int main() {
    int n,i,j,k;
    
    char letters[9] = {'A','B','C','D','E','F','G','H','I'};
    
    printf("Enter Height : ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        
        k = 1;
        
        for(j = n; j >= 1; j--){
            if(j <= i) printf(" *");
            else printf("  ");
        }
        
        for (j = 2; j <= n; j++ ){
            if(j <= i) printf(" *");
            else printf("  ");
        }
        
        printf("  |  ");
        
        k = 1;
        
        for(j = n; j >= 1; j--){
            if(j <= i) {
                printf(" %d",k);
                k++;
            }
            else printf("  ");
        }
        
        for (j = 2; j <= n; j++ ){
            if(j <= i) {
                printf(" %d",k);
                k++;
            }
            else printf("  ");
        }
        
        printf("  |  ");
        
        k = 1;
        
        for(j = n, k = 0; j >= 1; j--){
            if(j <= i) {
                printf(" %c",letters[k]);
                k++;
            }
            else printf("  ");
        }
        
        for (j = 2; j <= n; j++ ){
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
