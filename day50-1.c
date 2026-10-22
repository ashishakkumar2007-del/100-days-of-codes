#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}