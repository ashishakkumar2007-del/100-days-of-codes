#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("Source file cannot be opened.");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) {
        printf("Destination file cannot be opened.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}