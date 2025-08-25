#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    int m;
    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int unique[n], u = 0;
    unique[u++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i-1]) unique[u++] = ranked[i];
    }

    int pos = u - 1;
    for (int i = 0; i < m; i++) {
        while (pos >= 0 && player[i] >= unique[pos]) pos--;
        printf("%d\n", pos + 2);
    }
    return 0;
}