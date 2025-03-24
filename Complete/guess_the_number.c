#include <stdio.h>
#include <string.h>

int main() {
    // Guess halfway each time
    char answer[10];
    int guess = 0;
    int high = 1000;
    int low = 1;
    while (strcmp(answer, "correct")) {
        // Adjust high low
        if (!(strcmp(answer, "higher"))) {
            low = guess + 1;
        }
        else if (!(strcmp(answer, "lower"))) {
            high = guess - 1;
        }

        // Calc guess
        guess = (high + low) / 2;

        // Print guess and recieve answer
        printf("%d\n", guess);
        fflush(stdout);

        scanf("%s", answer);
        

    }

    return 0;

}