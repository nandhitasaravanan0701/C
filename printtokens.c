#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    if (scanf("%[^\n]", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == ' ') {
                printf("\n");
            } else {
                printf("%c", s[i]);
            }
        }
        printf("\n"); // Print final newline for the last word
    }

    free(s);
    return 0;
}
