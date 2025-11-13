#include <stdio.h>

int main() {
    
    int array[10] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = array;
    
    printf("=== Pointer Array Operations ===");
    
    printf("\n1.*ptr:           %d",*ptr);
    printf("\n2.*(ptr+3):       %d",*(ptr+3));
    printf("\n3.ptr[2]:         %d",ptr[2]);
    ptr = ptr + 4;
    printf("\n4.After ptr + 4:  %d",*ptr);
    printf("\n5.ptr[1]:         %d",ptr[1]);
    int *ptr2 = &array[5];
    printf("\n6.*ptr2:          %d",*ptr2);
    printf("\n7.ptr2[-2]:       %d",ptr2[-2]);
    
    return 0;
}
