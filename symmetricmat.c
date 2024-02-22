//check if atrix is symmetric
#include <stdio.h>

// Function to calculate the transpose of a matrix
void transposeMatrix(int rows, int cols, int mat[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

// Function to check if a matrix is symmetric
int isSymmetric(int rows, int cols, int mat[rows][cols]) {
    int transpose[cols][rows];
    transposeMatrix(rows, cols, mat, transpose);
    
    // Check if the matrix is equal to its transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != transpose[i][j]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isSymmetric(rows, cols, mat)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}