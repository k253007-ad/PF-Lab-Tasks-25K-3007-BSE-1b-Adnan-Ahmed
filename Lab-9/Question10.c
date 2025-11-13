#include <stdio.h>

int main() {
    int grid[3][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };
    
    int *ptr = &grid[0][0];
    printf("\n%d", *ptr);
    printf("\n%d", *(ptr + 5));
    printf("\n%d", ptr[3]);
    
    int *ptr2 = &grid[1][0];
    printf("\n%d", *ptr2);
    printf("\n%d", ptr2[2]);
    printf("\n%d", ptr2[-1]);
    
    int *scan_ptr = &grid[0][0];
    for (int i = 0; i < 12; i++) {
        if (scan_ptr[i] % 3 == 0) {
            printf("\n%d", scan_ptr[i]);
        }
    }
    
    int *ptr3 = &grid[2][3];
    printf("\n%d", *ptr3);
    
    return 0;
}
