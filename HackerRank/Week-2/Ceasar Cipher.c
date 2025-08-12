#include <stdio.h>
#include <ctype.h>

int main() {
    int n, k;
    scanf("%d", &n);
    char text[n + 1];
    scanf("%s", text);
    scanf("%d", &k);

    k = k % 26;
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (isupper(c))
            text[i] = 'A' + (c - 'A' + k) % 26;
        else if (islower(c))
            text[i] = 'a' + (c - 'a' + k) % 26;
    }

    printf("%s\n", text);
    return 0;
}
