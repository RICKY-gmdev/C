#include <stdio.h>
int Binary_search_iterative(int a[], int low, int high, int key);
int Binary_search_iterative(int a[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (high - low) / 2;
        if (a[mid] == key)
            return mid; // Element found
        if (a[mid] < key)
            low = mid + 1; // Search in the right half
        else
            high = mid - 1; // Search in the left half
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
    int result = Binary_search_iterative(a, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}