#include <stdio.h>

int sockMerchant(int n, int ar[]) {
    int freq[101] = {0};
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        freq[ar[i]]++;
    }
    for (int i = 1; i <= 100; i++) {
        pairs += freq[i] / 2;
    }
    return pairs;
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    printf("%d\n", sockMerchant(n, ar));
    return 0;
}
