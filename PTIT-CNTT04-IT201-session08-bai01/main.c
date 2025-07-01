#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i+1;
        }
    }
        return -1;
}
int main(void) {
    int n=0;
    while(n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for(int i=0;i<n;i++) {
        printf("arr[%d]=",i+1);
scanf("%d",&arr[i]);

    }
    int search;
    printf("Please input a number:");
    scanf("%d",&search);
    int result = linear_search(arr,n,search);
    if(result==-1) {
        printf("No such number exists");

    }else {
        printf("position is : %d",result);
    }

    return 0;
}
