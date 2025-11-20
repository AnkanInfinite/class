/*
Write a program to find out matrix mul plica on and transpose of matrix using 2d 
array.
*/
#include <stdio.h>

#define MAX 10

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to input matrix elements
void inputMatrix(int matrix[MAX][MAX], int rows, int cols, char *name) {
    int i, j;
    printf("Enter elements of Matrix %s (%dx%d):\n", name, rows, cols);
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX], transpose[MAX][MAX];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("=== Matrix Multiplication and Transpose Program ===\n");

    // 1. Input Dimensions
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 2. Validation: Columns of First Matrix must equal Rows of Second Matrix
    if (c1 != r2) {
        printf("\nError: Matrix multiplication not possible.\n");
        printf("Column of first matrix (%d) must equal row of second matrix (%d).\n", c1, r2);
        return 1;
    }

    // 3. Input Matrices
    inputMatrix(a, r1, c1, "A");
    inputMatrix(b, r2, c2, "B");

    // 4. Logic: Matrix Multiplication
    // Initializing product matrix to 0
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            product[i][j] = 0;
        }
    }

    // Calculating product
    for (i = 0; i < r1; ++i) {        // Loop through rows of Matrix A
        for (j = 0; j < c2; ++j) {    // Loop through columns of Matrix B
            for (k = 0; k < c1; ++k) { // Inner loop for sum of products
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResult of Matrix Multiplication (Matrix C):\n");
    displayMatrix(product, r1, c2);

    // 5. Logic: Transpose of the Result Matrix (Matrix C)
    // Rows become columns, Columns become rows
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            transpose[j][i] = product[i][j];
        }
    }

    printf("\nTranspose of Matrix C:\n");
    // Note: Dimensions are swapped (c2 rows, r1 cols)
    displayMatrix(transpose, c2, r1);

    return 0;
}