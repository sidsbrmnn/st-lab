#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Not enough elements.\n");
        return 0;
    }

    int *arr;
    arr = (int *)malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory cannot be allocated at the moment.\n");
        return 0;
    }

    printf("Enter elements in ascending order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, pos = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key < arr[mid]) {
            high = mid - 1;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {
            pos = mid;
            break;
        }
    }

    if (pos > -1) {
        printf("Element found at position %d.\n", pos + 1);
    } else {
        printf("Element not found.\n");
    }

    free(arr);
    return 0;
}
