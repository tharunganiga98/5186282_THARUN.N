#include <stdio.h>

int towerBreakers(int n, int m) {
    if (m == 1 || n % 2 == 0) return 2;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", towerBreakers(n, m));
    }
    return 0;
}
