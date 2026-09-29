#include <stdio.h>

int main()
{
    int a[5], b[5], c[10], i;

    printf("Enter elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for(i = 5; i < 10; i++)
    {
        c[i] = b[i - 5];
    }

    printf("Merged array:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}