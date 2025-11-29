#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    long long actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];   
    }

  
    long long expectedSum = (long long)(n - 1) * (n) / 2;

    int repeated = actualSum - expectedSum;

    printf("%d\n", repeated);

    return 0;
}

