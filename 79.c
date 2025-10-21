#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];

    
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nMain diagonal elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }

    
    printf("\n\nSecondary diagonal elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]);
    }

    printf("\n");

    return 0;
}
