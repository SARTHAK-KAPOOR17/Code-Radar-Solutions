#include<stdio.h>
int main(){
    char st[50];
    int age;
    char st1[50];

    scanf("%s", &st);
    scanf("%d", &age);
    scanf("%s", &st1);

    printf("Name: %s", st);
    printf("Age: %d", age);
    printf("Hobby: %s", st1);

    return 0;
}