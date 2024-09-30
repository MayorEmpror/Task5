#include <stdio.h>
int main() {
    char pakistani;
    int age;
    printf("are you  pakistani y/n");
    scanf(" %c",&pakistani );
    printf("enter your age");
    scanf("%d",&age);
    pakistani=='y' && age>=18?printf(" you are legible to vote") : printf("you can not vote");
    return 0;
}