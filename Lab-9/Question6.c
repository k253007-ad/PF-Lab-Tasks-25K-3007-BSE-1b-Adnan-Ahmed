#include <stdio.h>

float taxing(float a){
    
    float tax;
    
    tax = (a/100) * 8;
    
    if (a <= 20000) tax = 0;
    else if (a <= 50000) tax = (a/100) * 10;
    else tax = (a/100) * 15;
    
    return tax;
}

int main() {
    
    int income; 
    float tax, net;
    
    printf("Enter Your Income \nIncome : ");
    scanf("%d",&income);

    tax = taxing(income);
    
    net = income - tax;
    
    printf("\n\nYour Net Income is %.2f$ After Tax of %.2f$", net, tax);
    
    return 0;
}
