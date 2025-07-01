#include <stdio.h>
#include <stdlib.h>

int binary_search(int *arr, int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid+1;
        }else if (arr[mid] < key) {
            left = mid + 1;

        }else {
            right = mid - 1;
        }
    }

    return -1;
}
int main(void) {
    int n = 0 ;
    while (n <= 0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter number to search: ");
    scanf("%d", &search);
    int result = binary_search(arr, n, search);
    if (result == -1) {
        printf("Element not found\n");

    }else
        printf("Element found at index %d\n", result);
    return 0;
}
