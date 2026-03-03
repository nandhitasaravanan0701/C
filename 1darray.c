#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;

   
    if (scanf("%d", &n) != 1) return 0;

    
    int *arr = (int*)malloc(n * sizeof(int));

    
    if (arr == NULL) {
        return 1; 
    }

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

   
    printf("%d\n", sum);

        free(arr);

    return 0;
}
