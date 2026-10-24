#include <stdio.h>

int main()
{
    int a[100], n, i;
    int total = 0, left = 0, right;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        total = total + a[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - a[i];

        if(left == right)
        {
            pivot = i;
            break;
        }

        left = left + a[i];
    }

    printf("%d", pivot);

    return 0;
}