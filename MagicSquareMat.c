//TO CHECK IF THE MATRIX IS MAGIC SQUARE MATRIX
#include <stdio.h>

int main() 
{
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int square[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    // Calculate the sum of the first row
    int sum = 0;
    for (int j = 0; j < size; j++) {
        sum += square[0][j];
    }

    // Check if the sum of every row, column, and both diagonals is equal to the sum of the first row
    int rowSum, colSum;
    int isMagicSquare = 1; // Assume it's a magic square initially
    for (int i = 0; i < size; i++) {
        rowSum = 0;
        colSum = 0;
        for (int j = 0; j < size; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            isMagicSquare = 0; // Not a magic square
            break;
        }
    }

    // Check the sum of both diagonals
    int diagSum1 = 0, diagSum2 = 0;
    for (int i = 0; i < size; i++) {
        diagSum1 += square[i][i];
        diagSum2 += square[i][size - 1 - i];
    }
    if (diagSum1 != sum || diagSum2 != sum) {
        isMagicSquare = 0; // Not a magic square
    }

    if (isMagicSquare) {
        printf("The given square matrix is a magic square.\n");
    } else {
        printf("The given square matrix is not a magic square.\n");
    }

    return 0;
}