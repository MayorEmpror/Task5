#include <stdio.h>
int main() {
 float angle_1, angle_2,angle_3,sum;
 printf("enter angle one");
  scanf("%f",&angle_1);
   printf("enter angle two");
  scanf("%f",&angle_2);
   printf("enter angle three");
  scanf("%f",&angle_3);
    if (angle_1 <0 || angle_2 < 0 || angle_3 < 0) { 
        printf("invalid angle was entered");
    }
    else {
        sum = angle_1 + angle_2 + angle_3;
        if( sum != 180) { 
            printf("these angles do not form a triangle");
        }
        else printf("this is a triangle");
    } 
    return 0;
}