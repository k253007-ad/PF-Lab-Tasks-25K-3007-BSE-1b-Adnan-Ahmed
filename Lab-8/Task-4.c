#include <stdio.h>

int main() {
    
    int i, j, avalible;
    
    int seats[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };
    
    printf("Seats are avalible at");
    
    for (i=0; i<3; i++){
        
        for (j=0; j<3; j++){
            if(seats[i][j] == 1){
                printf("\nRow : %d and column ; %d",i+1,j+1);
                avalible += 1;
            }
        }
    }
    
    printf ("\nTotal seats avalible are %d",avalible);
    
    return 0;
}
