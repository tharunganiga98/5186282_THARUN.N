#include <stdio.h>

const char* balancedSums(int arr[], int n) {
    long long total = 0, leftSum = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) return "YES";
        leftSum += arr[i];
    }
    return "NO";
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("%s\n", balancedSums(arr, n));
    }
    return 0;
}
