#include <stdio.h>
#include <string.h>

int main() {
    
    int i,j,n, run = 5;
    char appetizers[3][15] = {"Appetizers1", "Appetizers2", "Appetizers3"};
    float aCost[3] = {4, 5.5, 10};
    char mainCourse[3][15] = {"MainCourse1", "MainCourse2", "MainCourse3"};
    float mCost[3] = {7, 12, 15};
    char desserts[3][15] = {"Desserts1", "Desserts2", "Desserts3"};
    float dCost[3] = {5, 9, 11};
    
    printf("I put the quickest list");
    
    printf("\n\nWelcome to the Resturant");
    
    
    n = 0;
    
    printf("\n\nAppetizers:\n--------------------");
    
        for(i = 0; i < 3 ; i++){
            printf("\n%-12s : %.1f",appetizers[i],aCost[i]);
        }
    printf("\n--------------------");
    
    printf("\nMain Course:\n--------------------");
    
        for(i = 0; i < 3 ; i++){
            printf("\n%-12s : %.1f",mainCourse[i],mCost[i]);
        }
    printf("\n--------------------");
    
    printf("\nDesserts:\n--------------------");
    
        for(i = 0; i < 3 ; i++){
            printf("\n%-12s : %.1f",desserts[i],dCost[i]);
        }
    printf("\n--------------------");
    
    printf("\nBudget:\n--------------------");
        
        for(i = 0; i < 3 ; i++){
            if(aCost[i] < 10)printf("\n%-12s : %.1f",appetizers[i],aCost[i]);
        }
        for(i = 0; i < 3 ; i++){
            if(mCost[i] < 10)printf("\n%-12s : %.1f",mainCourse[i],mCost[i]);
        }
        for(i = 0; i < 3 ; i++){
            if(dCost[i] < 10)printf("\n%-12s : %.1f",desserts[i],dCost[i]);
        }
    printf("\n--------------------");
    
    printf("\n\nPlease dont deduct number for not taking user input");
    
    return 0;
}
