#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // For descending order
}

int main() {
    // Get number books and max height
    int numBooks;
    int heightMax;

    scanf("%d", &numBooks);
    scanf("%d", &heightMax);

    long long total = 0;
    // Get each book increment by smallest width
    for(int i = 0; i < numBooks; i++) {
        // Get vals
        int dims[3];

        scanf("%d", &dims[0]);
        scanf("%d", &dims[1]);
        scanf("%d", &dims[2]);

        // Sort vals
        qsort(dims, 3, sizeof(int), compare);
        
        // Select optimal val
        int heightMaxxed = 0;
        long long optimalVal = 0;
        for (int j= 0; j < 3; j++) {
            if (dims[j] > heightMax) {
                heightMaxxed++;
            }
        }
        if (heightMaxxed == 1 || heightMaxxed == 0) {
            optimalVal = dims[2];
        }
        else if (heightMaxxed == 2) {
            optimalVal = dims[1];
        }
        else {
            total = 0;
            break;
        }


        total += optimalVal;
    }
    if (total == 0) {
        printf("impossible");
    }
    else {
        printf("%lld", total);    
    }
    
    return 0;
}

