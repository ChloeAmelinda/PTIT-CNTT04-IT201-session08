#include <stdio.h>
#include <stdlib.h>

void selection_sort(int a[], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d", &n);
    }
    int *arr = (int*)malloc(sizeof(int)*n);
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++) {
        printf(" %d\t",arr[i]);

    }
    free(arr);
    return 0;
}
