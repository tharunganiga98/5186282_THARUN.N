#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    return (x > y) - (x < y);
}

long long maxMin(int k, long long arr[], int n) {
    qsort(arr, n, sizeof(long long), compare);
    long long diff = arr[k - 1] - arr[0];
    for (int i = 1; i <= n - k; i++) {
        long long current = arr[i + k - 1] - arr[i];
        if (current < diff) diff = current;
    }
    return diff;
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    printf("%lld\n", maxMin(k, arr, n));
    return 0;
}
