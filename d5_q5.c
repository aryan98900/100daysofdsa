#include <stdio.h>

void mergeLogs(int log1[], int n1, int log2[], int n2)
{
    int i = 0, j = 0, k = 0;
    int mergedLog[n1 + n2];

    while (i < n1 && j < n2)
    {
        if (log1[i] <= log2[j])
        {
            mergedLog[k++] = log1[i++];
        }
        else
        {
            mergedLog[k++] = log2[j++];
        }
    }

    while (i < n1)
    {
        mergedLog[k++] = log1[i++];
    }

    while (j < n2)
    {
        mergedLog[k++] = log2[j++];
    }

    printf("Merged Log: ");
    for (int l = 0; l < n1 + n2; l++)
    {
        printf("%d ", mergedLog[l]);
    }
    printf("\n");
}

int main()
{
    int n1, n2;
    printf("Enter number of entries in Log 1: ");
    scanf("%d", &n1);
    int log1[n1];
    printf("Enter sorted times for Log 1: ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &log1[i]);

    printf("Enter number of entries in Log 2: ");
    scanf("%d", &n2);
    int log2[n2];
    printf("Enter sorted times for Log 2: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &log2[i]);

    mergeLogs(log1, n1, log2, n2);

    return 0;
}
