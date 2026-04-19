#include <stdio.h>

int main(void) {
    FILE *file = fopen("file_io/sample.txt", "r");
    char line[256];

    if (file == NULL) {
        printf("Could not open sample.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
