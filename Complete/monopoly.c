#include <stdio.h>

int main() {
    // Get inputs
    int numHotels;
    scanf("%d", &numHotels);

    // Get all possible roll combinations
    int rolls[12] = {0};
    for (int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            int roll = i + j;
            rolls[roll-1] += 1;
        }
    }

    double totalProb = 0;
    int roll;
    for (int i = 0; i < numHotels; i++) {
        scanf("%d", &roll);
        totalProb += rolls[roll-1] / 36.0;
    }

    printf("%f", totalProb);
}