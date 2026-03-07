#include <stdio.h>

int main(void) {
    int n = 0;

    // 1) Kullanıcıdan pozitif n al (while loop)
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        if (scanf("%d", &n) != 1) {   // eğer sayı girilmezse
            n = 0;                     // tekrar sor
            while(getchar() != '\n');  // input buffer temizle
        }
    }

    // 2) 1..n sayıları yazdır
    printf("\n=== Counting ===\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 3) 1..n toplamı
    printf("\n=== Sum 1..n ===\n");
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);

    // 4) n! faktöriyel
    printf("\n=== Factorial n! ===\n");
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %llu\n", n, fact);

    return 0;
}