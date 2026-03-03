#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int count_distinct_characters(const char* s) {
    int count = 0;
    int alphabet[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (alphabet[s[i] - 'a'] == 0) {
            alphabet[s[i] - 'a'] = 1;
            count++;
        }
    }
    return count;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res = count_distinct_characters(a) - count_distinct_characters(b);
    if (res == 0) return strcmp(a, b); // Tie-breaker: Lexicographical
    return res;
}

int sort_by_length(const char* a, const char* b) {
    int res = strlen(a) - strlen(b);
    if (res == 0) return strcmp(a, b); // Tie-breaker: Lexicographical
    return res;
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            // If the comparison function returns > 0, swap the strings
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}