#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the word from the array (index is i-1)
            printf("%s\n", words[i - 1]);
        } else if (i > 9) {
            // Check if the number is even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}




