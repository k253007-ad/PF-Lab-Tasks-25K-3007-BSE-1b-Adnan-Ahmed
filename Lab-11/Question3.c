#include <stdio.h>
#include <string.h>
#include <time.h>

struct employee {
    int id;
    char name[50];
    char department[20];
    char designation[20];
    float salary;
    int joinDay, joinMonth, joinYear;
    char phone[20];
    char email[50];
};

int yearsExperience(int d, int m, int y) {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int cy = now->tm_year + 1900;
    int cm = now->tm_mon + 1;
    int cd = now->tm_mday;
    int exp = cy - y;
    if (m > cm || (m == cm && d > cd)) exp--;
    return exp;
}

void addEmployee(struct employee e[], int n) {
    for(int i=0;i<n;i++){
        printf("\nEmployee %d\n", i+1);
        printf("ID: "); scanf("%d",&e[i].id);
        printf("Name: "); scanf(" %[^\n]",e[i].name);
        printf("Department: "); scanf("%s",e[i].department);
        printf("Designation: "); scanf("%s",e[i].designation);
        printf("Salary: "); scanf("%f",&e[i].salary);
        printf("Joining day month year: ");
        scanf("%d %d %d",&e[i].joinDay,&e[i].joinMonth,&e[i].joinYear);
        printf("Phone: "); scanf("%s",e[i].phone);
        printf("Email: "); scanf("%s",e[i].email);
    }
}

void displayAll(struct employee e[], int n){
    for(int i=0;i<n;i++){
        printf("\nID: %d\nName: %s\nDept: %s\nDesignation: %s\nSalary: %.2f\nJoined: %d-%d-%d\nPhone: %s\nEmail: %s\nExperience: %d years\n",
        e[i].id,e[i].name,e[i].department,e[i].designation,e[i].salary,
        e[i].joinDay,e[i].joinMonth,e[i].joinYear,e[i].phone,e[i].email,
        yearsExperience(e[i].joinDay,e[i].joinMonth,e[i].joinYear));
    }
}

void deptSalaryStats(struct employee e[], int n){
    char dept[20];
    printf("Enter department: ");
    scanf("%s",dept);
    float total=0; int count=0;
    for(int i=0;i<n;i++){
        if(strcmp(e[i].department,dept)==0){
            total += e[i].salary;
            count++;
        }
    }
    if(count==0) printf("No employees\n");
    else printf("Total Salary: %.2f\nAverage Salary: %.2f\n", total, total/count);
}

void annualAppraisal(struct employee e[], int n){
    int id; float percent;
    printf("Enter employee ID: ");
    scanf("%d",&id);
    printf("Increment percent: ");
    scanf("%f",&percent);
    for(int i=0;i<n;i++){
        if(e[i].id==id){
            e[i].salary += e[i].salary * (percent/100.0);
            printf("New Salary: %.2f\n",e[i].salary);
            return;
        }
    }
    printf("Employee not found\n");
}

void search(struct employee e[], int n){
    int choice;
    printf("1 Dept  2 Designation  3 Experience\n");
    scanf("%d",&choice);
    if(choice==1){
        char dept[20];
        printf("Enter dept: "); scanf("%s",dept);
        for(int i=0;i<n;i++)
            if(strcmp(e[i].department,dept)==0)
                printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    else if(choice==2){
        char des[20];
        printf("Enter designation: "); scanf("%s",des);
        for(int i=0;i<n;i++)
            if(strcmp(e[i].designation,des)==0)
                printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    else if(choice==3){
        int x;
        printf("Minimum experience: "); scanf("%d",&x);
        for(int i=0;i<n;i++)
            if(yearsExperience(e[i].joinDay,e[i].joinMonth,e[i].joinYear)>=x)
                printf("%d %s %d yrs\n",e[i].id,e[i].name,yearsExperience(e[i].joinDay,e[i].joinMonth,e[i].joinYear));
    }
}

void promotionEligible(struct employee e[], int n){
    printf("Employees eligible for promotion (>3 years):\n");
    for(int i=0;i<n;i++){
        if(yearsExperience(e[i].joinDay,e[i].joinMonth,e[i].joinYear)>3)
            printf("%d %s (%s)\n",e[i].id,e[i].name,e[i].designation);
    }
}

int main(){
    int n;
    printf("Number of Employees (0 for default): ");
    scanf("%d",&n);

    struct employee e[20];

    if(n==0){
        n=5;
        struct employee defaultData[5] = {
            {1,"Ali","IT","Junior",55000,10,3,2020,"03001234567","ali@mail.com"},
            {2,"Sara","HR","Senior",72000,5,7,2018,"03007654321","sara@mail.com"},
            {3,"Hamza","Finance","Manager",90000,12,1,2017,"03005551234","hamza@mail.com"},
            {4,"Aisha","Marketing","Intern",30000,1,11,2023,"03007778899","aisha@mail.com"},
            {5,"Usman","Operations","Director",150000,20,4,2015,"03009996666","usman@mail.com"}
        };
        for(int i=0;i<5;i++) e[i] = defaultData[i];
    }
    else {
        addEmployee(e,n);
    }

    int op;
    while(1){
        printf("\n1 View All\n2 Dept Salary Stats\n3 Appraisal\n4 Search\n5 Promotion Eligible\n6 Exit\n");
        scanf("%d",&op);
        if(op==1) displayAll(e,n);
        else if(op==2) deptSalaryStats(e,n);
        else if(op==3) annualAppraisal(e,n);
        else if(op==4) search(e,n);
        else if(op==5) promotionEligible(e,n);
        else break;
    }

    return 0;
}
