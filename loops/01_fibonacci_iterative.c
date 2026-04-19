#include <stdio.h>

int main(void) {
    int steps;
    int a = 0;
    int b = 1;

    printf("Enter number of terms: ");
    scanf("%d", &steps);

    if (steps <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int i = 0; i < steps; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    printf("\n");
    return 0;
}
