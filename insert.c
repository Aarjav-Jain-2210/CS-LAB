// C program to insert an element into a specific position in an array:


#include <stdio.h>

int main()
 {
    int arr[MAX_SIZE];
    int size, position, element;

    // Input the size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position where the element needs to be inserted
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Check if the position is valid
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1; // Exit the program with an error code
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position] = element;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
