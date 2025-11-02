#include <stdio.h>
void swap_temp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

void swap_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

void swap_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

void swap_pointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: a = %d, b = %d\n\n", x, y);

    swap_temp(x, y);      
    swap_arithmetic(x, y);  
    swap_xor(x, y);         
    swap_pointers(&x, &y);  
    return 0;
}
