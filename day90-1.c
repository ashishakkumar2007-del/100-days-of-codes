#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male");
    else if (p.gender == FEMALE)
        printf("Gender: Female");
    else
        printf("Gender: Other");

    return 0;
}