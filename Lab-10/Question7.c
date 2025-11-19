#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n, run = 5;
    char students[5][10] = {"Alice","Bob","Charlie","Diana","Eve"};
    char subjects[5][5] = {"AP","PF","CAL","ICT","FE"};
    
    // Is 3d Array Allowed (one way to find out)
    char courses[5][5][5]={
        {"AP",  "CAL", "PF", "NO", "NO"},
        {"CAL", "FE",  "NO", "NO", "NO"},
        {"ICT", "PF",  "NO", "NO", "NO"},
        {"ICT", "CAL", "Pf", "AP", "NO"},
        {"FE",  "CAL", "AP", "NO", "NO"}
    };
    
    
    printf("I removed manual typing for quick results");
    
    printf("\n\nWelcome to the Adminstration Management");
    
    while ( run != 0 ){
        
        n = -
        
        printf("\n\nType 1 : to Check Students Courses");
        printf("\nType 2 : to Check Students in Specific Course");
        printf("\nType 3 : to Check if a Student is taking more Courses");
        printf("\nType 0 : to exit\n");
        scanf("%d",&run);
        
        if( run == 1 ){
            printf("\n-------------------------");
            for(i = 0; i < 5 ; i++){
                printf("\n%-8s :", students[i]);
                for(j = 0; j < 5; j++){
                    if(strcmp(courses[i][j],"NO")) printf("%-4s", courses[i][j]);
                }
            }
            printf("\n-------------------------");
        }
        
        if( run == 2 ){
            printf("\n-------------------------\n");
            
            printf("\nWhich Subject to Check\n");
            for(i = 0; i < 5; i++){
                printf("Type %d for %-4s\n", i+1, subjects[i]);
            }
            scanf("%d",&n);
            
            for(i = 0; i < 5 ; i++){
                for(j = 0; j < 5; j++){
                    if(strcmp(courses[i][j],subjects[n-1]) == 0){
                        printf("\n%-8s ", students[i]);
                    }
                }
            }
            printf("\n-------------------------");
        }
        
        if( run == 3 ){
            printf("\n-------------------------");
            for(i = 0; i < 5 ; i++){
                n = 0;
                for(j = 0; j < 5; j++){
                    if(strcmp(courses[i][j],"NO") != 0)n++;
                }
                if (n > 3)printf("\n%-8s with %d subjects ", students[i],n);
            }
            printf("\n-------------------------");
        }
    }
    
    printf("\n\nPlease dont deduct number for not taking user input");
    
    return 0;
}
