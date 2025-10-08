#include <stdio.h>

int main() {
    int income,e1,e2,e3,e4,p1,p2,p3,p4,total,saving;
    
    printf("Enter Total Income : ");
    scanf("%d",&income);
    
    printf("Enter Food Expence : ");
    scanf("%d",&e1);
    
    printf("Enter Transport Expence : ");
    scanf("%d",&e2);
    
    printf("Enter Entertainment Expence : ");
    scanf("%d",&e3);
    
    printf("Enter Utilities Expence : ");
    scanf("%d",&e4);
    
    total = e1 + e2 + e3 + e4 ;
    saving = ((income-total)*100/income);
    
    p1 = (100-((total-e1)*100)/total);
    p2 = (100-((total-e2)*100)/total);
    p3 = (100-((total-e3)*100)/total);
    p4 = (100-((total-e4)*100)/total);
    
    printf("\nTotal expenses : %d",total);
    printf("\nRemaining : %d",income - total);
    printf("\nSaving Percentage : %d%%",saving);
    printf("\nFood Expences Percentage : %d%%",p1);
    printf("\nTransport Expences Percentage : %d%%",p2);
    printf("\nEntertainment Expences Percentage : %d%%",p3);
    printf("\nUtilities Expences Percentage : %d%%",p4);
    
    if(saving > 20){ printf("\nExcellent Saving"); }
    else if(saving < 0){ printf("\nYou are overspending!"); }
    
    if(p1 > 40)printf("\nWarning High spending in Food.");
    if(p2 > 40)printf("\nWarning High spending in Transport.");
    if(p3 > 40)printf("\nWarning High spending in Entertainment.");
    if(p4 > 40)printf("\nWarning High spending in Utilities.");
    
    return 0;
}