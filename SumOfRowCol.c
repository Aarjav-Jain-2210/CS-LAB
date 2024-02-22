//Sum Of Row Column Of Matrix
#include <stdio.h>

int main()
 {
    int rows, cols, rowSum, colSum;
    
    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate and display sum of each row
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i+1, rowSum);
    }

    // Calculate and display sum of each column
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; j++) {
        colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d: %d\n", j+1, colSum);
    }

    return 0;
}