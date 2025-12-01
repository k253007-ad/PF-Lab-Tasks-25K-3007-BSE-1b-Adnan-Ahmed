#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char name[50];
    int marks;
};

int main() {
    
    int n,i;
    
    printf("\nEnter the number of students : ");
    scanf("%d",&n);
    
    struct student *std = (struct student*)malloc(sizeof(struct student) * n);
    
    for(i = 0; i < n; i++){
        printf("\nEnter the name of %d student : ", i+1);
        scanf(" %[^\n]", std[i].name);
        printf("Enter the marks of %d student : ", i+1);
        scanf("%d",&std[i].marks);
    }
    
    printf("\nStudents with more than 75 marks : \n\n");
    
    int found = 0;
    
    for(i = 0; i < n; i++){
        if (std[i].marks > 75){
            printf("Student %s with %d marks.\n", std[i].name, std[i].marks);
            found = 1;
        }
    }
    
    if(!found)printf("No one with above 75 marks.");
    
    free(std);
    std = NULL;
    
    return 0;
}
