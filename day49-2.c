#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c. ", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            if(strchr(name + i + 1, ' ') != NULL)
                printf("%c. ", name[i + 1]);
            else
                printf("%s", name + i + 1);
        }
    }

    return 0;
}