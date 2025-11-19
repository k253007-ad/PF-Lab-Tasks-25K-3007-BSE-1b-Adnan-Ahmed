#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j, run = 1;
    float avg;
    char students[5][10] = {"Alice","Bob","Charlie","Diana","Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    
    while ( run == 1 ){
        
        avg = 0;
        j = 0;
        
        // As exact as possible
        printf("\n\nStudent Marks:");
        printf("\nName            Marks");
        printf("\n----------------------");
        
        for(i = 0; i < 5 ; i++){
            printf("\n%-16s%d", students[i], marks[i]);
            avg += marks[i];
        }
        
        for(i = 1; i < 5 ; i++){
            if(marks[i] > marks[i-1]) j = i;
        }
        
        printf("\n\nHighest Score: %s with %d marks", students[j], marks[j]);
        
        printf("\nAverage Marks: %.2f", avg/5);
        
        
        printf("\n\nType 1 if You want to Conform again or 0 to Exit\n");
        scanf("%d",&run);
    }
    
    printf("\n\nI removed the manual typing");
    
    return 0;
}
