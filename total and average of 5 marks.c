#include <stdio.h>

int main() {
    int mark, i, total = 0;
    float average;

    for (i = 1; i <= 5; i++) {
        printf("Enter mark %d: ", i);
        scanf("%d", &mark);
        total = total + mark;
    }

    average = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f", average);

    return 0;
}
