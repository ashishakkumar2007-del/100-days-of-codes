#include <stdio.h>

int main()
{
    char str[100];
    int i, vowel = 0, consonant = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u' || str[i]=='A' ||
               str[i]=='E' || str[i]=='I' || str[i]=='O' ||
               str[i]=='U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d", consonant);

    return 0;
}