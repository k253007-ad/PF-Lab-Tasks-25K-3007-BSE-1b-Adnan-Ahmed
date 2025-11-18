#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n,run = 1, check = 0;
    char email[100], domain[100];
    
    while ( run == 1){
        
        check= 0;
        j = 0;
        
        printf("\nType an email : ");
        scanf("%s",email);
        
        n = strlen(email);
        
        for(i = 0; i < n; i++){
            
            if ( check == 1 ){
                domain[j] = email[i];
                j++;
            }
            
            if ( email[i] == '@' ) check++;
             
        }
        
        domain[j] = '\0';
        
        if ( check == 1) printf("\n\nDomain: %s", domain);
        else printf("\n\nInvalid email");
        
        // strcpy(domain,"");
        
        printf("\n\nType 1 to Retry or 0 to Exit\n");
        scanf("%d",&run);
        
    }
    
    printf("\n\nHope it works");
    
    return 0;
}
