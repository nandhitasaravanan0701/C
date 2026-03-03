#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
   
    if (scanf("%d", &num) != 1) return 0;
    
    
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    
    int start = 0;
    int end = num - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers toward the middle
        start++;
        end--;
    }

   
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    
    free(arr);
    return 0;
}
