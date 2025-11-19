#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n, run = 1;
    int vowel = 0,consonant = 0,digit = 0,spaces = 0;
    char str[40];
    
    while ( run == 1 ){
        
        vowel = 0;
        consonant = 0;
        digit = 0;
        spaces = 0;
        
        printf("\nType a Text : ");
        scanf("%[^\n]",str);
        
        n = strlen(str);
        
        str[n] = '\0';
        
        for(i = 0; i < n; i++){
            
            // Hardcore checking
            
            if ( str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u') vowel ++;
            else consonant++;
            if ( str[i] >= '0' && str[i] <= '9') digit++;
            if ( str[i] == ' ') spaces++;
        }
        
        printf("\n\nStatistics:");
        printf("\nVowels: %d",vowel);
        printf("\nConsonants: %d",consonant);
        printf("\nDigits: %d",digit);
        printf("\nSpaces: %d",spaces);
        printf("\nTotal characters: %d",n);
        
        printf("\n\nType 1 to Retry or 0 to Exit\n");
        scanf("%d",&run);
    }
    
    printf("\n\nIt works??");
    
    return 0;
}
