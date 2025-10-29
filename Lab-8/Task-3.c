#include <stdio.h>

int main() {
    
    int i, j;
    
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    
    for (i=0; i<4; i++){
        
        printf("|");
        
        for (j=0; j<4; j++){
            if(image[i][j] == 1) printf("  ");
            else printf(" #");
        }
        
        printf("|    |");
        
        for (j=0; j<4; j++){
            if(image[i][j] == 0) printf("  ");
            else printf(" #");
        }
        
        printf("|\n");
    }
    
    return 0;
}
