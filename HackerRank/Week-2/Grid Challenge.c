#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpChar(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

const char* gridChallenge(char **grid, int n) {
    for (int i = 0; i < n; i++) {
        qsort(grid[i], n, sizeof(char), cmpChar);
    }
    for (int col = 0; col < n; col++) {
        for (int row = 0; row < n - 1; row++) {
            if (grid[row][col] > grid[row + 1][col]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char **grid = malloc(n * sizeof(char*));
        for (int i = 0; i < n; i++) {
            grid[i] = malloc((n + 1) * sizeof(char));
            scanf("%s", grid[i]);
        }
        printf("%s\n", gridChallenge(grid, n));
        for (int i = 0; i < n; i++) free(grid[i]);
        free(grid);
    }
    return 0;
}
