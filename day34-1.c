#include <stdio.h>

int main()
{
    int a[10], i, n = 5, num, pos;

    printf("Enter 5 elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i-1];
    }

    a[pos-1] = num;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}