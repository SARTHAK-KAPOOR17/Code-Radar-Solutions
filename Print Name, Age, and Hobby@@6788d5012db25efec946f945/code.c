#include<stdio.h>
int main(){
    char st[50];
    int age;
    char st1[50];

    scanf("%s %d", &st, &age);
    scanf("%s", &st1);

    print("Name %s", st);
    print("Age %d", age);
    print("Hobby %s", st1);

    return 0;
}