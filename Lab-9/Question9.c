#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;
    printf("\n\nInitial values: a=%d, b=%d, c=%d", a, b, c);
    
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;
    printf("\n\n*ptr1=%d, *ptr2=%d, *ptr3=%d", *ptr1, *ptr2, *ptr3);
    
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr3;
    ptr3 = temp;
    printf("\n\nPointer swap:");
    printf("\n*ptr1=%d, *ptr2=%d, *ptr3=%d", *ptr1, *ptr2, *ptr3);
    
    // I did Random Adding Subtracting and Multiplying
    *ptr1 += 50;
    *ptr2 -= 100;
    *ptr3 *= 2;
    
    printf("\n\nAfter Random Add, Subtract, Multiplying :");
    printf("\na=%d, b=%d, c=%d", a, b, c);
    printf("\n*ptr1=%d, *ptr2=%d, *ptr3=%d", *ptr1, *ptr2, *ptr3);
    
    // Choosing different for each
    ptr1 = &c;
    ptr2 = &a;
    ptr3 = &b;
    printf("\n\nAfter rearranging pointers:");
    printf("\n*ptr1=%d, *ptr2=%d, *ptr3=%d", *ptr1, *ptr2, *ptr3);
    
    // Another Random Numbers
    *ptr1 += 25;
    *ptr2 -= 75;
    *ptr3 *= 3;
    printf("\n\nFinal values:");
    printf("\na=%d, b=%d, c=%d", a, b, c);
    printf("\n*ptr1=%d, *ptr2=%d, *ptr3=%d", *ptr1, *ptr2, *ptr3);
    
    return 0;
}
