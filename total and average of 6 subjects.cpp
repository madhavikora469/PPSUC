#include <stdio.h>

int main() {
    int m[6], i, total = 0;
    float avg;

    printf("Enter 6 subject marks: ");
    for(i=0;i<6;i++)
        scanf("%d", &m[i]);

    for(i=0;i<6;i++)
        total += m[i];

    avg = total / 6.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}

