#include <stdio.h>

int main() {
    
    int i, j;
    
    int photos[2][12] = {
        {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
    };
    
    for (i=0; i<2; i++){
        
        for (j=0; j<12; j++){
            printf("\nYear %d, Month %2d: %2d photos ",i+1, j+1, photos[i][j]);
        }
    }
    
    return 0;
}
