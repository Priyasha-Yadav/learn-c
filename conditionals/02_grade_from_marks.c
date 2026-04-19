#include <stdio.h>

int main(void) {
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks > 25) {
        printf("A Grade\n");
    } else if (marks > 20) {
        printf("B Grade\n");
    } else if (marks > 15) {
        printf("C Grade\n");
    } else {
        printf("D Grade\n");
    }

    return 0;
}
