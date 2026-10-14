#include <stdio.h>

int main()
{
    char str[100];
    int i, space = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            space++;

        else if(str[i] >= '0' && str[i] <= '9')
            digit++;

        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z') ||
                str[i] == '\n')
        {
            // Do nothing for alphabets and newline
        }

        else
            special++;
    }

    printf("Spaces = %d\n", space);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);

    return 0;
}