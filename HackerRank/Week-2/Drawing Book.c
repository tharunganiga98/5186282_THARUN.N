#include <stdio.h>

int pageCount(int n, int p) {
    int fromStart = p / 2;
    int fromEnd = (n / 2) - (p / 2);
    return fromStart < fromEnd ? fromStart : fromEnd;
}

int main() {
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d\n", pageCount(n, p));
    return 0;
}
