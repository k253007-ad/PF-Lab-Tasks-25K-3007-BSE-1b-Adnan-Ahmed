#include <stdio.h>
#include <string.h>

int main() {
    
    int i,h,n, run = 1;
    char students[100][100];
    int marks[100];
    
    while ( run == 1 ){
        
        h = 0;
        n = 0;
        
        printf("\n\nEnter Number of Student : ");
        scanf("%d",&n);
        
        for(i = 0; i < n ; i++){
            printf("\nEnter name of Student %d : ",i + 1);
            scanf("%s",students[i]);
            printf("\nEnter marks of Student %d : ",i + 1);
            scanf("%d",&marks[i]);
        }
        
        for(i = 1; i < n ; i++){
            if(marks[i] > marks[i-1]) h = i;
        }
        
        printf("\nHighest Score: %s with %d marks", students[h], marks[h]);
        
        printf("\n\nType 1 if You want to Conform again or 0 to Exit\n");
        scanf("%d",&run);
    }
    
    printf("\n\nIt was simple");
    
    return 0;
}
