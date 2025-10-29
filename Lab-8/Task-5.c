#include <stdio.h>

int main() {
    
    int i, j, condition = 0;
    
    int spot[4][4] = {
        {12, 15, 10, 9 },
        {11, 8,  12, 13},
        {14, 13, 9,  7 },
        {16, 11, 10, 8 }
    };
    
    printf("The cold spots are found at:");
    
    for (i=0; i<4; i++){
        
        for (j=0; j<4; j++){
            //for north
            if(i > 0) if(spot[i][j] < spot[i-1][j]) condition += 1;
            else condition +=1;
            //for south
            if(i < 3) if(spot[i][j] < spot[i+1][j]) condition += 1;
            else condition +=1;
            //for east
            if(j < 3) if(spot[i][j] < spot[i][j+1]) condition += 1;
            else condition +=1;
            //for west
            if(j > 0) if(spot[i][j] < spot[i][j-1]) condition += 1;
            else condition +=1;    
            
             if (condition == 4) printf("\nAt position (%d,%d) with temprature %d°C",i+1,j+1,spot[i][j]);
             condition = 0;
        }
    }
    
    
    return 0;
}
