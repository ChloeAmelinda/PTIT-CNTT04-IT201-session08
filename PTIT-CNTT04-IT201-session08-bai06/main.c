#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r) {
    int n1= m-l+1;
    int n2= r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++) {
        L[i]= arr[l+i];

    }
    for(int i=0;i<n2;i++) {
        R[i]= arr[m+1+i];
    }
    int i=0,j=0,k= l;
    while(i<n1 && j<n2) {
        if(L[i]<=R[j]) {
            arr[k]=L[i];
            i++;
        }
        else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }

}
void merge_sort(int arr[], int l, int r) {
    if(l<r) {
        int m= l+(r-l)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
        merge(arr, l, m, r);

    }
}
void print_array(int arr[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ", arr[i]);

    }
    printf("\n");
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);

    }
    merge_sort(arr, 0, n-1);
    print_array(arr, n);
    return 0;
}
