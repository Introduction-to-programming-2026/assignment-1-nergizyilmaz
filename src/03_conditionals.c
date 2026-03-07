#include <stdio.h>

int main(void) {
    int score = -1;

    // 1) Kullanıcıdan sınav puanı al
    printf("Enter exam score (0-100): ");
    scanf("%d", &score);

    // 2) Geçerli aralık kontrolü
    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 0; // programı sonlandır
    }

    // 3) Harf notu
    if (score == 100) {
        printf("Grade: A\n");
        printf("Perfect score!\n"); // bonus
    } else if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}