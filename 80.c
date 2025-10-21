#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], result[10][10];

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\nMatrix multiplication not possible! (columns of A != rows of B)\n");
        return 0;
    }

    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant matrix after multiplication (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
