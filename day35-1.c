#include <stdio.h>

int main()
{
    int a[5], i, max, second;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    second = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}