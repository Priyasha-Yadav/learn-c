#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];
    char reversed[100];
    int length;

    printf("Enter a word: ");
    scanf("%99s", word);

    length = (int)strlen(word);

    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - 1 - i];
    }
    reversed[length] = '\0';

    if (strcmp(word, reversed) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
