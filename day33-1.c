#include <stdio.h>

int main()
{
    int a[5], i, search;
    int low = 0, high = 4, mid, found = 0;

    printf("Enter 5 elements in sorted order:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            found = 1;
            break;
        }
        else if(search > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}