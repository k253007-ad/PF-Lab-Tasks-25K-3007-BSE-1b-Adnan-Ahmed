#include <stdio.h>

float pricing(int a, int b){
    
    float total, daily, extra = 0;
    
    daily = a * 40;
    
    if (b > (a * 100)) extra = (b - (a * 100)) * 0.25;

    total = daily + extra;
    
    return total;
}

int main() {
    
    int days, km;
    float total;
    
    printf("Enter Number of Days Car was Rented \nDays : ");
    scanf("%d",&days);

    printf("Enter Kilometers Driven \nKilometers : ");
    scanf("%d",&km);
    
    total = pricing(days,km);
    
    printf("\n\nYour Total Rental Cost is %.2f$", total);
    
    return 0;
}
