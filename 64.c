#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  
    int digit, i, max = 0, most_frequent = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)   
        num = -num;
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            most_frequent = i;
        }
    }
    printf("Digit %d occurs the most (%d times)\n", most_frequent, max);
    return 0;
}
