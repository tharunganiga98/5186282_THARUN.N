#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicList;

void append(DynamicList *list, int value) {
    if (list->size == list->capacity) {
        list->capacity = list->capacity ? list->capacity * 2 : 1;
        list->data = realloc(list->data, list->capacity * sizeof(int));
    }
    list->data[list->size++] = value;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    DynamicList *arr = calloc(n, sizeof(DynamicList));
    int lastAnswer = 0;
    int *results = malloc(q * sizeof(int));
    int resCount = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            append(&arr[idx], y);
        } else if (type == 2) {
            int pos = y % arr[idx].size;
            lastAnswer = arr[idx].data[pos];
            results[resCount++] = lastAnswer;
        }
    }

    for (int i = 0; i < resCount; i++) {
        printf("%d\n", results[i]);
    }

    for (int i = 0; i < n; i++) {
        free(arr[i].data);
    }
    free(arr);
    free(results);
    return 0;
}
