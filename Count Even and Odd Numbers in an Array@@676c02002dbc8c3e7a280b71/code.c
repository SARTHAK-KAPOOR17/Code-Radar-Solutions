#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }


    int even, odd;
    even = odd = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[0] % 2 == 0){
            even = arr[0];
        } else{
            arr[0] = odd;
        }
    }

    printf("%d %d", even, odd);
    return 0;
}