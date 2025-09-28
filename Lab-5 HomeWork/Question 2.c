#include <stdio.h>

int main() {
    int power;
    char light;
    printf("Is Power On(Type 1) or Off(Type 2): ");
    scanf(" %d", &power);
    
    if (power == 1){
        printf("\nIs Light Red(R), Yellow(Y) or Green(G) : ");
        scanf(" %c", &light);
        
        if (light == 'R') {
            printf("\nStop");
        }
        else if (light == 'Y') {
            printf("\nCaution");
        }
        else {
            printf("\nGo");
        }
    }
        
    
    else{
        printf("Signal Off");
    }
    
    return 0;
}