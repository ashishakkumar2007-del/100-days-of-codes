#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char *names[] = {"ADMIN", "USER", "GUEST"};

    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}