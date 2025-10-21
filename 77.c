#include <stdio.h>

int main() {
    int n, i, j, k;
    int matrix[10][10];
    int distinct = 1;  
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (matrix[i][i] == matrix[k][k]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not distinct.\n");
    return 0;
}
