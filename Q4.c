#include <stdio.h>
int main() {
    char member;
    float P_amount,discount;
    printf("are you a member\t");
    scanf("%c",&member);
      printf("enter your purchase amount\t");
    scanf("%f",&P_amount);
    if(member == 'y' && P_amount > 100){
      printf("you are eligible for a discount");
    }else printf("you are unfit for a discount");
    return 0;
}