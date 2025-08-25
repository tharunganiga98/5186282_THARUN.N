#include <stdio.h>
#include <string.h>

#define SIZE 26

const char* isValid(const char* s) {
    int freq[SIZE] = {0};
    for (int i = 0; s[i]; i++) freq[s[i] - 'a']++;

    int counts[SIZE], k = 0;
    for (int i = 0; i < SIZE; i++) if (freq[i] > 0) counts[k++] = freq[i];

    int min = counts[0], max = counts[0];
    for (int i = 1; i < k; i++) {
        if (counts[i] < min) min = counts[i];
        if (counts[i] > max) max = counts[i];
    }

    if (min == max) return "YES";

    int minCount = 0, maxCount = 0;
    for (int i = 0; i < k; i++) {
        if (counts[i] == min) minCount++;
        if (counts[i] == max) maxCount++;
    }

    if (min == 1 && minCount == 1 && maxCount + minCount == k) return "YES";
    if (max - min == 1 && maxCount == 1 && minCount + maxCount == k) return "YES";

    return "NO";
}

int main() {
    char s[100005];
    scanf("%s", s);
    printf("%s\n", isValid(s));
    return 0;
}