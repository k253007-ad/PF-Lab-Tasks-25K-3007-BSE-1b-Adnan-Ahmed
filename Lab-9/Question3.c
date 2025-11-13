#include <stdio.h>

int main() {
    
    int temp;
    
    printf("Enter the Temprature in Celcius \nTemprature : ");
    scanf("%d",&temp);
    
    if (temp > 35) : printf("\n\nHEAT ALERT");
    else if (temp < 10) : printf("\n\nCOLD ALERT");
    else if (temp > 15 && temp < 25) : printf("\n\nCOMFORT ZONE");
    else printf("\n\nNORMAL CONDITIONS");
    
    return 0;
}
