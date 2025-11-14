#include <stdio.h>
#include <string.h>

int main() {
    
    char fName[] = "Adnan";
    char lName[] = "Ahmed";
    
    int len = strlen(fName);
    int size = sizeof(fName);
    printf("%d%d", len, size);
    
    puts(strcat(fName,lName));
    printf("%s%s", fName, lName);
    printf(strncat(fName,lName,2));
    printf(strncat(lName,fName,2));
    
    printf("%d",strcmp(fName,lName));
    
    return 0;
}
