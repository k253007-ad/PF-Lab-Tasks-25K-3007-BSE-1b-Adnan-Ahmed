#include <stdio.h>

int shipping(int a, int b){
    
    int cost, shipping;
    
    if (a > 100) shipping = 0;
    else if (b < 2) shipping = 10;
    else if (b >= 2 && b <= 5) shipping = 15;
    else shipping = 20;
    
    cost = shipping + a;
    
    return cost;
}

int main() {
    
    int amount, weight, total;
    
    printf("Enter the Order Amount \nAmount : ");
    scanf("%d",&amount);
    printf("\nEnter the Pakage Weight \nWeight : ");
    scanf("%d",&weight);
    
    total = shipping(amount,weight);
    
    printf("\n\nYour Total is %d$",total);
    
    return 0;
}
