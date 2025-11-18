#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n,check = 4, correct = 0;
    int capital = 0, digit = 0, special = 0;
    char str[20];
    
    while ( correct < check ){
        
        correct = 0;
        capital = 0;
        digit = 0;
        special = 0;
        
        printf("\nType a password : ");
        scanf("%s",str);
        
        n = strlen(str);
        
        if (n < 8) printf("\nThe Password is Too Short");
        else correct++;
        
        for(i = 0; i < n; i++){
            
            // I tried to include all special chatacters
            
            if ( str[i] >= 'A' && str[i] <= 'Z') capital = 1;
            else if ( str[i] >= 'a' && str[i] <= 'z') j++; //random
            else if ( str[i] >= '0' && str[i] <= '9') digit = 1;
            else if ( str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){} 
            else special = 1;
        }
        
        if( capital == 0 ) printf("\nThe Password does not Contain Capital letter");
        else correct++;
        
        if( digit == 0 ) printf("\nThe Password does not Contain Digits");
        else correct++;
        
        if( special == 0 ) printf("\nThe Password does not Contain Special Character");
        else correct++;
        
        if(correct < check) printf("\n\nRetry With New Password\n");
        else correct++;
    }
    
    printf("\n\nThank God Your Password Has Been Accepted");
    
    printf("\n\nYou Have Escaped New Password Hell, How do you Feel?");
    
    return 0;
}
