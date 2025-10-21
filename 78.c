#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int sum = 0;

    
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

  
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal elements = %d\n", sum);
    return 0;
}
