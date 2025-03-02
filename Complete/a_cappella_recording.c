#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    // Get numbers
    int n, d;
    scanf("%d %d", &n, &d);

    // Get numbers and sort them
    int* notes = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        // Get note
        scanf("%d", &notes[i]);
    }

    // Quick sort
    qsort(notes, n, sizeof(int), compare);

    // Go through array in segments of the note range
    int diff = 0;
    int recordings = 1;
    for (int i = 0; i < (n - 1); i++) {
        diff += notes[i + 1] - notes[i];
        if (diff > d) {
            recordings++;
            diff = 0;
        }
    }

    printf("%d", recordings);
    free(notes);
}