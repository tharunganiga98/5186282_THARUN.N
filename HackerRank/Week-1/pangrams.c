#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPangram(char text[]) {
    int letters[26] = {0};
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i])) {
            letters[tolower(text[i]) - 'a'] = 1;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!letters[i]) return 0;
    }
    return 1;
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    if (isPangram(sentence)) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }
    return 0;
}