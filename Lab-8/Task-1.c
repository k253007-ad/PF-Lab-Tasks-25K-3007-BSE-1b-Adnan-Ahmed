#include <stdio.h>

int main() {
    
    int i, j, sum;
    
    float avg;
    
    int classes[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };
    
    for (i=0; i<3; i++){
        
        avg = 0;
        sum = 0;
        for (j=0; j<4; j++){
            sum += classes[i][j];
        }
        avg = sum/4;
        
        printf("\nThe Average of class %d is %f",i+1,avg);
    }
    
    return 0;
}
