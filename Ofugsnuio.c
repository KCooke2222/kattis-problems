#include <stdio.h>
#include <stdlib.h>


int main() {
    // Get numbers in array in reverse order
    int numInputs;
    scanf("%d", &numInputs);
    
    int* numbers = malloc(numInputs * sizeof(int));
    if (numbers == NULL) { 
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    int input;
    for (int i = (numInputs - 1); i >= 0; i--) {
        scanf("%d", &input);
        numbers[i] = input;
    }

    // Print numbers
    for (int i = 0; i < numInputs; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);  // Free the allocated memory
    return 0;
}


