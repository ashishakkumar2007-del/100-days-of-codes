#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, most = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d", most);

    return 0;
}