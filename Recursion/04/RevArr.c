#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void revArray(int i, int arr[], int n){
    if(i >= n/2){
        return ;
    }
    swap(&arr[i], &arr[n-i-1]);
    revArray(i+1, arr, n);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    revArray(0, arr, n);
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
}