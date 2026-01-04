#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Array before deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < n - 1; i++) arr[i] = arr[i+1];
    n--;

    printf("Array after deletion at beginning: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
