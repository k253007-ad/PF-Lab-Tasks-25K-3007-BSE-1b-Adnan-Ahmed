#include <stdio.h>

int main() {
    
    int subjects[100];
    int i, j, n, total=0;
    float average;
    int pass = 1;
    
    printf("Enter Number of Subjects \nSubjects : ");
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++ ){
        printf("Enter the Marks of Subject %d \nMarks : ",i+1);
        scanf("%d",&subjects[i]);
        total += subjects[i];
    }
    
    for ( i = 0; i < n; i++ ){
        if (subjects[i] < 40){ 
            pass = 0;
            printf("\nFailed in Subject %d",i+1);
        }
    }
    
    average = total/n;
    
    if (average >= 50) printf("\n\nYour Average is above or equal to 50%%");
    else {
        pass = 0;
        printf("\n\nYour Average is below 50%%");
    }
    
    if (pass == 1) printf("\nYou have Passed with Average %.2f%%",average);
    else printf("\nYou have Failed with Average %.2f%%",average);
    
    return 0;
}
