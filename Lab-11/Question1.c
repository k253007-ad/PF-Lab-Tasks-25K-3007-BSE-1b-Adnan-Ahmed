#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int marks[3];
    float percentage;
    char grade[3];
};

void defaults(struct student s[]){
    struct student d[10] = {
        {1,  "Ali",       {85, 90, 78}},
        {2,  "Sara",      {92, 88, 95}},
        {3,  "Hamza",     {30, 40, 45}},
        {4,  "Aisha",     {88, 84, 90}},
        {5,  "Usman",     {20, 35, 40}},
        {6,  "Fatima",    {95, 93, 97}},
        {7,  "Zain",      {60, 70, 65}},
        {8,  "Hania",     {10, 20, 15}},
        {9,  "Ahmed",     {76, 79, 74}},
        {10, "Maryam",    {94, 96, 95}}
    };

    for(int i = 0; i < 10; i++)
        s[i] = d[i];
}

void dataEntry(struct student s[],int n){
    for(int i=0;i<n;i++){
        printf("\nEnter Data of %d Student\n",i+1);
        
        printf("\nEnter id : ");
        scanf("%d",&s[i].id);

        printf("Enter name : ");
        scanf(" %[^\n]",s[i].name);

        for(int j = 0; j < 3; j++){
            do {
                printf("Enter marks %d (0-100): ",j+1);
                scanf("%d",&s[i].marks[j]);
            } while(s[i].marks[j] < 0 || s[i].marks[j] > 100);
        }
    }
}

void calculate(struct student s[], int n){
    for(int i=0;i<n;i++){
        int total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
        s[i].percentage = total / 3.0;

        if(s[i].percentage >= 90) strcpy(s[i].grade,"A+");
        else if(s[i].percentage >= 80) strcpy(s[i].grade,"A");
        else if(s[i].percentage >= 70) strcpy(s[i].grade,"B+");
        else if(s[i].percentage >= 60) strcpy(s[i].grade,"B");
        else if(s[i].percentage >= 50) strcpy(s[i].grade,"C");
        else strcpy(s[i].grade,"F");
    }
}

float classAverage(struct student s[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += s[i].percentage;

    return sum / n;
}

void aboveBelow(struct student s[], int n, float avg){
    printf("\n\nStudents ABOVE average:\n");
    for(int i=0;i<n;i++){
        if(s[i].percentage > avg)
            printf("%-2d %-10s %.2f\n",s[i].id, s[i].name, s[i].percentage);
    }

    printf("\nStudents BELOW average:\n");
    for(int i=0;i<n;i++){
        if(s[i].percentage < avg)
            printf("%-2d %-10s %.2f\n",s[i].id, s[i].name, s[i].percentage);
    }
}

void findByGrade(struct student s[], int n){
    char g[3];
    printf("\nEnter grade to search (A+,A,B+,B,C,F): ");
    scanf(" %s", g);

    printf("\nStudents with grade %s:\n", g);

    for(int i=0;i<n;i++){
        if(strcmp(s[i].grade, g) == 0)
            printf("%-2d %-10s %.2f\n", s[i].id, s[i].name, s[i].percentage);
    }
}

void search(struct student s[], int n){
    int option;
    printf("\nSearch by:\n1. Roll Number\n2. Name\nChoose: ");
    scanf("%d",&option);

    if(option == 1){
        int roll;
        printf("Enter roll: ");
        scanf("%d",&roll);
        for(int i=0;i<n;i++){
            if(s[i].id == roll){
                printf("\nFOUND: %s %.2f %s\n", s[i].name, s[i].percentage, s[i].grade);
                return;
            }
        }
        printf("Not found!\n");
    } else {
        char name[50];
        printf("Enter name: ");
        scanf(" %[^\n]",name);
        for(int i=0;i<n;i++){
            if(strcmp(s[i].name,name)==0){
                printf("\nFOUND: ID:%d %.2f %s\n", s[i].id, s[i].percentage, s[i].grade);
                return;
            }
        }
        printf("Not found!\n");
    }
}

void rankStudents(struct student s[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[j].percentage > s[i].percentage){
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n\nSTUDENT RANKS:\n");
    for(int i=0;i<n;i++){
        printf("%d. %-10s %.2f (%s)\n",i+1, s[i].name, s[i].percentage, s[i].grade);
    }
}


int main() {
    int n;
    struct student s[100];

    printf("Welcome to Student Record APP");
    printf("\n\nWrite the number of students \nor type 0 to choose default.");
    printf("\n\nNo of Students : ");
    scanf("%d",&n);

    printf("\n===================================");

    if(n == 0){
        printf("\nYou Have Data of 10 Students\n");
        n = 10;
        defaults(s);
        for(int i = 0; i < n; i++){
            printf("\n%-2d. %-10s {%d, %d, %d}",s[i].id, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        }
    } 
    else {
        dataEntry(s,n);
        for(int i = 0; i < n; i++){
            printf("\n%-2d. %-10s {%d, %d, %d}",s[i].id, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        }
    }
    printf("\n===================================");

    calculate(s,n);

    printf("\n\n%-3s %-10s %-12s %-5s\n","ID","Name","Percentage","Grade");
    for(int i=0;i<n;i++){
        printf("%-3d %-10s %-12.2f %-5s\n", s[i].id, s[i].name, s[i].percentage, s[i].grade);
    }
    printf("\n===================================");
    
    float avg = classAverage(s,n);
    printf("\nClass Average = %.2f", avg);
    
    printf("\n===================================");
    
    aboveBelow(s,n,avg);
    
    printf("\n===================================");
    
    findByGrade(s,n);
    
    printf("\n===================================");
    
    search(s,n);
    
    printf("\n===================================");
    
    rankStudents(s,n);
    
    printf("\n===================================");
    
    return 0;
}
