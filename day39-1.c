#include <stdio.h>

int main()
{
    int a[3][3], i, j, flag = 0;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}