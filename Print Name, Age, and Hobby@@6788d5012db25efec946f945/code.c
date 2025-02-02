#include <stdio.h>

int main(){
    char st[200];
    int age;
    char hob[200];

    scanf("%S %d", &st, &age);
    scanf("%st", &hob);

    print("Name: %s\n", st);
    print("Age: %d\n", age);
    printf("Hobby: %s\n", hob);
    return 0;
}