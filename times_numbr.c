#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num, count = 0;

    printf("The given array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("The number of times the number %d occurs in the given array is: %d\n", num, count);

    return 0;
}
