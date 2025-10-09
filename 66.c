#include <stdio.h>

int main() {
    int n, i, j, element;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++) {
        if(arr[i] > element)
            break;
    }
    for(j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = element;
    n++; 
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
