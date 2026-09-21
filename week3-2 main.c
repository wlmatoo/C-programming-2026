#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gz1(void) {
    double mid, final, assignment;
    double weighted_score;

    scanf("%lf %lf %lf", &mid, &final, &assignment);

    weighted_score = mid * 0.3 + final * 0.4 + assignment * 0.3;

    printf("weighted_score=%.2f\n", weighted_score);
}

void gz2(void) {
    double height, weight;
    double bmi;

    scanf("%lf %lf", &height, &weight);

    bmi = weight / (height * height);

    printf("bmi=%.2f\n", bmi);
}

int main() {
    gz2();

    return 0;
}