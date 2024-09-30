
#include <stdio.h>
int main() {
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num) {
        sum = num;

        // Repeat until sum is a single digit
        while (sum >= 10) {
            int temp = sum;
            sum = 0;

            // Sum the digits of the current sum
            while (temp > 0) {
                sum += temp % 10;
                temp = temp / 10;
            }
        }
    } else {
        sum = 0;
    }

    printf("Final sum of digits: %d\n", sum);
    return 0;
}
