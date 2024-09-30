#include <stdio.h>

int main() {
    float marks;
    char grade;
    
    printf("Enter marks ");
    scanf("%f", &marks);
    
    grade = marks >= 90 ? 'A' :
              marks >= 80 ? 'B' :
                 marks >= 70 ? 'C' :
                     marks >= 60 ? 'D' : 'F';  
    
    printf(" %c\n", grade);
    
    return 0;
}
