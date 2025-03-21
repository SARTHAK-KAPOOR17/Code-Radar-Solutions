#include<stdio.h>

int IsSorted(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]);
        return 0;
    }
    return 1;
}

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("%d ", &arr[i]);
    }

    if(IsSorted(arr, n)) {
        printf("Sorted\n");
    } else{
        printf("Not Sorted\n");
    }
    return 0;
}