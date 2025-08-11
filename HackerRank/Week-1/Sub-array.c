#include <stdio.h>

int subarrays(int arr[], int n, int d, int m) {
    int ways = 0;
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += arr[i + j];
        }
        if (sum == d) ways++;
    }
    return ways;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int d, m;
    scanf("%d %d", &d, &m);

    printf("%d\n", subarrays(arr, n, d, m));
    return 0;
}