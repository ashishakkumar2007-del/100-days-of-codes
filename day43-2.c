#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}