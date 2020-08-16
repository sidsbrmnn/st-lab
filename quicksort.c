#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int const low, int const high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr + i, arr + j);
        }
    }
    swap(arr + i + 1, arr + high);

    return i + 1;
}

void quicksort(int *arr, int low, int high) {
    int stack[high - low + 1];
    int top = -1;
    stack[++top] = low;
    stack[++top] = high;

    while (top > -1) {
        high = stack[top--];
        low = stack[top--];

        int p = partition(arr, low, high);

        if (p - 1 > low) {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        if (p + 1 < high) {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }
}

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Not enough elements\n");
        return 1;
    }

    int *arr = (int *)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory cannot be allocated at the moment\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", *(arr + i));
    }
    printf("\n");

    free(arr);
    return 0;
}
