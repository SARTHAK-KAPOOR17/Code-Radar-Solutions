#include <stdio.h>

int main(){
    char st[20];
    int age;
    char hob[20];

    scanf("%s %d", &st, &age);
    // scanf("%d", &age);
    scanf("%st", &hob);

    print("Name: %c\n", st);
    print("Age: %d\n", age);
    printf("Hobby: %c\n", hob);
    return 0;
}