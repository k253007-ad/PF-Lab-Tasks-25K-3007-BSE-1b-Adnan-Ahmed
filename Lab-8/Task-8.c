#include <stdio.h>

int main() {
    int student = 0, empty = 0, total = 0, i, j;
    int matrix[5][5];
    
    printf("Classroom Seating Chart:");
    printf("\n=======================");
    printf("\n(x = Student, o = Empty)\n\n");
    for (i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++){
            total += 1;
            if( (i + j) % 2 == 0){
                matrix[i][j] = 'x';
                student += 1;
            } else {
                matrix[i][j] = 'o';
                empty += 1;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("Row : %d  ",i+1);
        for(j = 0; j < 5; j++){
            printf("%2c",matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSummary:\nStudents seated: %d \nEmpty desks: %d \nTotal desks: %d", student, empty, total);
    
    return 0;
}
