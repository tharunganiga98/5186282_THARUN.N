#include <stdio.h>
#include <string.h>

long long digitSum(const char *n) {
    long long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

long long superDigitCalc(long long num) {
    while (num >= 10) {
        long long temp = 0;
        while (num > 0) {
            temp += num % 10;
            num /= 10;
        }
        num = temp;
    }
    return num;
}

int main() {
    char n[100001];
    long long k;
    scanf("%s %lld", n, &k);

    long long initialSum = digitSum(n) * k;
    printf("%lld\n", superDigitCalc(initialSum));
    return 0;
}
