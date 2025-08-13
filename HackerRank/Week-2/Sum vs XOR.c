#include <stdio.h>

long long sumXor(long long n) {
    if (n == 0) return 1; // Special case: only x=0 works
    long long count = 0;
    
    // Count how many bits are zero in n
    while (n > 0) {
        if ((n & 1) == 0) {
            count++;
        }
        n >>= 1;
    }
    
    // For each zero bit, we have 2 choices for x
    return 1LL << count;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", sumXor(n));
    return 0;
}
