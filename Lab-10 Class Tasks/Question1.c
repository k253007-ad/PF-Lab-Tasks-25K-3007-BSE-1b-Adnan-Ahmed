#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,k;
    
    char word[5][10] = {"Apple","Banana","Carrot","Grapes","Oranges"};
    
    puts(strcpy(word[1],"Mango"));
    
    for(i = 0; i < 5; i++){
        
        puts(word[i]);
        printf("%d\n",strlen(word[i]));
        
        for(j=0; word[i][j] != '\0'; j++){
            printf("%c\n",word[i][j]);
        }
    }
    
    return 0;
}
