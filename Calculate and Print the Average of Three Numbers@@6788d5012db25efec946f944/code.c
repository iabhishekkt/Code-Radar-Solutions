#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    double avg = (num1 + num2 + num3)/3.0;
    printf("Average: %.2lf", avg);
    return 0;
}