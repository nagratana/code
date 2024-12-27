#include<stdio.h>

int main() {
    int i, j, n;

    // Input size of array
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int a[n];

    // Input array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Bubble Sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                // Swap
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("The sorted array is:");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
