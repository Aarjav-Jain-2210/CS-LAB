//To delete an element from an array without leaving any gaps


#include <stdio.h>
int main()
 {
    int arr[MAX_SIZE];
    int size, position;

    // Input the size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1; // Exit the program with an error code
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    size--;

    // Print the updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}