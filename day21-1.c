#include <stdio.h>

int main()
{
    int n, first, last, temp, place = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    result = n - first * place - last;
    result = result + last * place + first;

    printf("After swapping = %d", result);

    return 0;
}