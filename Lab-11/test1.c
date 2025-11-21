#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[256];
    int consonant = 0, vowel = 0, digits = 0;

    fp = fopen("demo.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fscanf(fp,"%s",str);
    int n = strlen(str);
	
	for(int i = 0; i < n; i++){
		if ( str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u') vowel ++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else consonant++;
	}
	
	printf("\nVowels : %d \nConsonants : %d \nDigits : %d", vowel, consonant, digits);
	
    return 0;
}
