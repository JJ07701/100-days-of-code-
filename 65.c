#include <stdio.h>

int main() {
    int n, i, search, first, last, middle;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements (ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last) {
        if (arr[middle] == search) {
            printf("Element %d found at position %d\n", search, middle + 1);
            return 0;
        }
        else if (arr[middle] < search)
            first = middle + 1;  
        else
            last = middle - 1;   
        middle = (first + last) / 2;
    }
    printf("Element %d not found in the array.\n", search);
    return 0;
}
