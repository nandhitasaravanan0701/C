#include <stdio.h>

int main() {
    int n, sum = 0;

    
    if (scanf("%d", &n) == 1) {
        
        while (n > 0) {
    
            sum += (n % 10);
            
            n /= 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}
