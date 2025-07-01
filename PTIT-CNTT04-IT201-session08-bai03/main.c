#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *array, int length) {
    for (int i = 0; i < length-1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i=0;i<n;i++) {
        printf("arr[%d]=",i+1);
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for (int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }

    return 0;
}
