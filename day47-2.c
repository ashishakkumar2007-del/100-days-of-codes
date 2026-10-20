#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100], word[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > max)
            {
                max = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    word[j] = '\0';

    if(j > max)
    {
        max = j;
        strcpy(longest, word);
    }

    printf("Longest word = %s", longest);

    return 0;
}