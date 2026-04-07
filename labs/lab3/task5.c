#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) arr[i] = (i + 1) * 10;

    int idx;
    printf("индекс для удаления ", size - 1);
    scanf("%d", &idx);

    for(int i = idx; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    arr = (int*)realloc(arr, size * sizeof(int));

    printf("результат ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    free(arr);
    return 0;
}