#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//sap xep
void insertionSort(int arr[], int size) {
    int i, j, temp;
    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
//tuyen tinh
int linearSearch(int arr[], int size,int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i+1;
        }
    }
    return -1;
}
//nhi phan
int binary_search(int arr[], int size,int x) {
    int left= 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid+1;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    //nhap mang
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
    //in
    printf("Mang truoc khi sap xep:");
    printArray(arr,n);
    //sap xep
    printf("Mang sau khi sap xep:");
    insertionSort(arr,n);
    //in
    printArray(arr,n);
    //check
    int search;
    printf("Please input a number:");
    scanf("%d",&search);
    //tuyen tinh
    int result = linearSearch(arr,n,search);
    if (result==-1) {

        printf("The number %d is not found\n",search);
    }else {
        printf("The number %d position is %d\n",search,result);
    }
    //nhi phan
    if (result==-1) {
        printf("The number %d is not found",search);
    }else {
        printf("tim kiem nhi phan cua %d o vi tri %d\n",search, binary_search(arr,n,search));
    }
    return 0;
}
