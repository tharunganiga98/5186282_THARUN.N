#include <stdio.h>

void sorting(int numbers[], int size) {
    int freq[100] = {0};
    for (int i = 0; i < size; i++) {
        freq[numbers[i]]++;
    }
    for (int i = 0; i < 100; i++) {
        printf("%d ", freq[i]);
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int numbers[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    sorting(numbers, size);
    return 0;
}