//sum of diagonals of matrix
#include <stdio.h>

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, main_diag_sum = 0, opposite_diag_sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &size);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                main_diag_sum += matrix[i][j];
            }
            if (i + j == size - 1) {
                opposite_diag_sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal: %d\n", main_diag_sum);
    printf("Sum of opposite diagonal: %d\n", opposite_diag_sum);

    return 0;
}