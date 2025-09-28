#include <stdio.h>
#include <string.h> 

int main() {
    char username[20], password[20];
    
    printf("Enter Username: ");
    scanf("%s", username);
    
    if (strcmp(username, "AdnanAhmed") == 0) {
        printf("\nUsername Found");
        printf("\nEnter Password: ");
        scanf("%s", password);
        
        if (strcmp(password, "adnan123") == 0) {
            printf("\nUser Logging in\n");
        }
        else {
            printf("\nIncorrect Password. Try Again.\n");
        }
    }
    else {
        printf("\nIncorrect Username.\n");
    }
    
    return 0;
}