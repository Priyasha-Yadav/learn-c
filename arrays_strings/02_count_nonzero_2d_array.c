#include <stdio.h>

int main(void) {
    int count = 0;
    int matrix[3][4] = {
        {0, 1, 2, 0},
        {3, 0, 0, 4},
        {5, 6, 0, 7}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }

    printf("Non-zero elements: %d\n", count);
    return 0;
}
