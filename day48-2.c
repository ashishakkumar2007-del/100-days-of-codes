#include <stdio.h>

int main()
{
    char str[100];
    int i, j, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            for(j = start; j < end; j++, end--)
            {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Result: %s", str);

    return 0;
}