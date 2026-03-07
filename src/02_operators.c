
#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.
*/

int main(void) {
    int a = 0, b = 0;

    // 1) Kullanıcıdan sayıları al
    printf("Enter integer a: ");
    scanf("%d", &a);

    printf("Enter integer b: ");
    scanf("%d", &b);

    // 2) Arithmetic
    printf("\n=== Arithmetic ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b); // %% → % işareti için
    } else {
        printf("Cannot divide by zero.\n");
    }

    // 3) Comparison
    printf("\n=== Comparison ===\n");
    if (a > b) {
        printf("a is greater\n");
    } else if (b > a) {
        printf("b is greater\n");
    } else {
        printf("they are equal\n");
    }

    // 4) Logical checks
    printf("\n=== Logical checks ===\n");
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("Both numbers are not positive.\n");
    }

    if (a < 0 || b < 0) {
        printf("At least one number is negative.\n");
    } else {
        printf("No number is negative.\n");
    }

    return 0;
   }