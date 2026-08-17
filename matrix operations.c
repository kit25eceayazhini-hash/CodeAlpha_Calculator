#include <stdio.h>

#define MAX 10

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int rows, int cols) {
    int C[MAX][MAX];

    printf("\nMatrix Addition:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX],
                      int rowsA, int colsA, int colsB) {
    int C[MAX][MAX] = {0};

    printf("\nMatrix Multiplication:\n");

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int A[MAX][MAX], int rows, int cols) {
    printf("\nTranspose of Matrix A:\n");

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    addMatrices(A, B, rows, cols);
    multiplyMatrices(A, B, rows, cols, cols);
    transposeMatrix(A, rows, cols);

    return 0;
}
