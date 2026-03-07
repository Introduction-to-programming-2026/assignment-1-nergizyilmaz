#include <stdio.h>

int main(void) {
    // 1) Define constants
    const double QUIZ_WEIGHT = 0.4;
    const double EXAM_WEIGHT = 0.6;
    const int PASS_SCORE = 50;
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;

    double quiz = 0.0;
    double exam = 0.0;

    // 2) Get scores from user
    printf("Enter quiz score (0-100): ");
    scanf("%lf", &quiz);
    printf("Enter exam score (0-100): ");
    scanf("%lf", &exam);

    // 3) Validate input
    if (quiz < MIN_SCORE || quiz > MAX_SCORE || exam < MIN_SCORE || exam > MAX_SCORE) {
        printf("Invalid score(s). Must be between %d and %d.\n", MIN_SCORE, MAX_SCORE);
        return 1;
    }

    // 4) Calculate final score using constants
    double finalScore = quiz * QUIZ_WEIGHT + exam * EXAM_WEIGHT;

    printf("\nFinal score: %.2f\n", finalScore);

    // 5) Print PASS/FAIL
    if (finalScore >= PASS_SCORE) {
        printf("PASS\n");
        if (finalScore >= 90) {
            printf("Excellent\n");
        }
    } else {
        printf("FAIL\n");
        if (finalScore < 50) {
            printf("Needs improvement\n");
        }
    }

    return 0;
}