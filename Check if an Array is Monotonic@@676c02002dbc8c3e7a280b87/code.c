#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int isIncreasing = 1;
    int isDecreasing = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            isDecreasing = 0;
        } else if(arr[i] < arr[i - 1]) {
            isIncreasing = 0;
        }
    }

    if(isIncreasing || isDecreasing){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}