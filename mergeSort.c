//To merge two sorted arrays without using sorting techniques

#include <stdio.h>
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2, mergeSize;

    // Input size and elements of the first sorted array
    printf("Enter size of the first sorted array: ");
    scanf("%d", &size1);
    printf("Enter elements of the first sorted array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second sorted array
    printf("Enter size of the second sorted array: ");
    scanf("%d", &size2);
    printf("Enter elements of the second sorted array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    mergeSize = size1 + size2;
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }

    // Print the merged array
    printf("Merged array without using sorting technique: ");
    for (int i = 0; i < mergeSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}