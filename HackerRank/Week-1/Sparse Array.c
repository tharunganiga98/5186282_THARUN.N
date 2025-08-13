#include <stdio.h>

int main() {
    int n, q;
    scanf("%d", &n);
    char strings[n][1001];
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }
    scanf("%d", &q);
    char queries[q][1001];
    for (int i = 0; i < q; i++) {
        scanf("%s", queries[i]);
    }
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            int k = 0;
            while (strings[j][k] != '\0' && queries[i][k] != '\0' && strings[j][k] == queries[i][k]) {
                k++;
            }
            if (strings[j][k] == '\0' && queries[i][k] == '\0') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
