#include <stdio.h>

int main(){
    char st[100];
    int age;
    char hob[100];

    scanf("%s", &st);
    scanf("%d", &age);
    scanf("%st", &hob);

    print("Name: %s\n", st);
    print("Age: %d\n", age);
    printf("Hobby: %s\n", hob);
    return 0;
}