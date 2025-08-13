#include <stdio.h>
#include <math.h>

int isPowerOfTwo(unsigned long long n) {
    return (n && !(n & (n - 1)));
}

unsigned long long largestPowerOfTwo(unsigned long long n) {
    unsigned long long p = 1;
    while (p << 1 <= n) {
        p <<= 1;
    }
    return p;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        
        int turn = 0; // 0 for Louise, 1 for Richard
        
        while (n != 1) {
            if (isPowerOfTwo(n)) {
                n /= 2;
            } else {
                n -= largestPowerOfTwo(n);
            }
            turn = !turn; // switch turns
        }
        
        if (turn == 1)
            printf("Louise\n");
        else
            printf("Richard\n");
    }
    return 0;
}
