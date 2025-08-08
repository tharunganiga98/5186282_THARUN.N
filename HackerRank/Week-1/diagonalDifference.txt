#include <stdio.h>
#include <stdlib.h>

int difference(int n, int arr[n][n]) {
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        a += arr[i][i];
        b += arr[i][n - i - 1];
    }
    return abs(a - b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("%d\n",difference(n, arr));
    return 0;
}
