#include <stdio.h>

int main(void) {
    int number;
    int is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
