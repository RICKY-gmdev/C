#include <stdio.h>
int L_search(int a[], int n, int key);
int L_search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i; 
        
    }
    return -1; 
}
// End of search function
int main()
{
    int n, i;
    printf("Enter the range");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int key;
    printf("Enter the element to search");
    scanf("%d", &key);
    int result = L_search(a, n, key);
    if (result == -1)
        printf("Element not found.");
    else
        printf("Element found at %d", result);
    return 0;
    getchar();
}