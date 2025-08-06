#include <stdio.h>

unsigned int Shifbits(unsigned int a) {
    return ~a;
}

int main() {
    int count;
    scanf("%d", &count);
    while (count--) {
        unsigned int value;
        scanf("%u", &value);
        unsigned int flipped = Shifbits(value);
        printf("%u\n", flipped);
    }
    return 0;
}