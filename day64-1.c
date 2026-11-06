#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int max = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int count = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            count++;
        }

        if (count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}