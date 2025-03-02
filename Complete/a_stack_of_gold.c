#include <stdio.h>

#define TUNGSTENWEIGHT 29260
#define GOLDWEIGHT 29370

int main() {
    // Inputs
    int w, s;
    scanf("%d %d", &w, &s);

    // Calculate number of gold coins
    int coins = (s * (s+1)) / 2;
    int goldCoins = (w - (coins * TUNGSTENWEIGHT)) / (GOLDWEIGHT - TUNGSTENWEIGHT);

    // Print result
    printf("%d", goldCoins);
}