#include <stdio.h>

float billing(float a, float b){
    
    float cost, tax, tip, service = 0;
    
    tax = (a/100) * 8;
    
    if (a > 50) tip = (a/100) * 15;
    else tip = (a/100) * 10;
    
    if(b > 6) service = (a/100) * 5;
    
    cost = a + tax + tip + service;
    
    return cost;
}

int main() {
    
    int foodCost, people; 
    float total;
    
    printf("Enter the Cost of Food \nFood Cost : ");
    scanf("%d",&foodCost);
    printf("\nEnter the Number of People \nPeople : ");
    scanf("%d",&people);
    
    total = billing(foodCost,people);
    
    printf("\n\nYour Total is %.2f$",total);
    
    return 0;
}
