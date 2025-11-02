#include <stdio.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int binary, decimal = 0, base = 1, rem;
        printf("Enter binary number: ");
        scanf("%d", &binary);

        while (binary > 0) {
            rem = binary % 10;
            decimal = decimal + rem * base;
            binary = binary / 10;
            base = base * 2;
        }

        printf("Decimal = %d\n", decimal);
    }

    else if (choice == 2) {
        int decimal, rem, binary = 0, base = 1;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        while (decimal > 0) {
            rem = decimal % 2;
            binary = binary + rem * base;
            decimal = decimal / 2;
            base = base * 10;
        }

        printf("Binary = %d\n", binary);
    }

    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
