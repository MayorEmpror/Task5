#include <stdio.h>

int counter(int n) {
    int count = 0;
    // constant numbers are the multipules of 2 that check indiviual sets.
    if (n & 1) count++;
    if (n & 2) count++;
    if (n & 4) count++;
    if (n & 8) count++;
    if (n & 16) count++;
    if (n & 32) count++;
    if (n & 64) count++;
    if (n & 128) count++;
    if (n & 256) count++;
    if (n & 512) count++;
    if (n & 1024) count++;
    if (n & 2048) count++;
    if (n & 4096) count++;
    if (n & 8192) count++;
    if (n & 16384) count++;
    if (n & 32768) count++;
    if (n & 65536) count++;
    if (n & 131072) count++;
    if (n & 262144) count++;
    if (n & 524288) count++;
    if (n & 1048576) count++;
    if (n & 2097152) count++;
    if (n & 4194304) count++;
    if (n & 8388608) count++;
    if (n & 16777216) count++;
    if (n & 33554432) count++;
    if (n & 67108864) count++;
    if (n & 134217728) count++;
    if (n & 268435456) count++;
    if (n & 536870912) count++;
    if (n & 1073741824) count++;
    if (n & 2147483648) count++;
    
    return count;
}

int main() {
    int num ;// Example number
    printf("enter any number");
    scanf("%d",&num);
    int sum  = counter(num);
    printf("Number of 1's in %d is: %d\n", num, sum);
    return 0;
}
