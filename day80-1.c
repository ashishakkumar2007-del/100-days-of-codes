#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[50];

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Open file again for reading
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %d\n\n", marks);
    }

    fclose(fp);

    return 0;
}