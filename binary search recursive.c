#include <stdio.h>

int binary_search_recursive(int a[], int low, int high, int k)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == k)
            return mid; // Element found

        else if (a[mid] < k)
            return binary_search_recursive(a, mid + 1, high, k); // Search in the right half

        else
            return binary_search_recursive(a, low, mid - 1, k); // Search in the left half
    }
    return -1; // Element not found
}
int main()
{
    int i, n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n]; // Declare the array with the correct size
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binary_search_recursive(a, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}