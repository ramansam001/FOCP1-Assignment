#include <stdio.h>
int main() {
    int a = 0, b = 1, c;
    int num;
    printf("Enter the number of terms: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 1; i <= num; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
