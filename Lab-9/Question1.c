#include <stdio.h>

int main() {
    
    int limit, amount, remaning;
    
    printf("Enter the Remaning Transaction Limit \nLimit : ");
    scanf("%d",&limit);
    printf("\nEnter the Transaction Amount \nAmount : ");
    scanf("%d",&amount);
    
    remaning = 5000 - (limit+amount);
    
    if(remaning < 0){
        printf("\nYour Transaction was DENIED");
    } else {
        printf("\nYour Transaction was APPROVED");
        printf("\nRemaning Limit is %d",remaning);
    }
    
    
    return 0;
}
