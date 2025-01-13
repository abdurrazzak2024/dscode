
#include <stdio.h>

int main() {
    int size, i, position, value;

    // Input the size of array
    printf("Input the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements in the array
    printf("Input %d elements in the array in ascending order:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d:", i);
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Input the position where the value will be inserted
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &position);

    // Print current list of the array
    printf("The current list of the array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert the value at the specified position
    // Shift the elements to the right to make space
    for (i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;  // Insert the value at the position

    // Print the new list of the array after insertion
    printf("After inserting the element the new list is:\n");
    for (i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
