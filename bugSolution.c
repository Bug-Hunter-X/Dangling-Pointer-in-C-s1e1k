#include <stdio.h>

int main() {
    int *ptr = NULL; // Initialize pointer to NULL
    int x = 10; 

    ptr = &x;  // Assign the address of x to ptr 
    *ptr = 20; //Modify the value using the pointer
    printf("%d\n", x); //Print the modified value
    return 0; 
} 