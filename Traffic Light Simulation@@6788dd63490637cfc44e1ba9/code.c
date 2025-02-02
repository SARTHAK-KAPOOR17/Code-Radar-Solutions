#include<stdio.h>
int main(){
    char lights;

    scanf("%C", &lights);

    switch(lights){
        case 'R':
            printf("Stop");
        break;

        case 'G':
            printf("Go");
        break;

        case 'Y':
            printf("Slow Down");
        break;

        default:
            printf("Invalid input");
    }
    return 0;
}