#include <stdio.h>

int main()
{
    int n, pos, i;

    printf("Enter the number of elements (n): ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input for n.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d space-separated integers: ", n);
    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input for array elements.\n");
            return 1;
        }
    }

    printf("Enter the position to delete (1-based): ");
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n)
    {
        printf("Invalid position.\n");
        return 1;
    }

    for (i = pos; i < n; i++)
    {

        arr[i - 1] = arr[i];
    }

    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
