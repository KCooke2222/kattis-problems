#include <stdio.h>

int main() {
    int maxHealth = 0;

    // Get herb numbers
    int greenHerbs;
    scanf("%d", &greenHerbs);

    int redHerbs;
    scanf("%d", &redHerbs);

    // Calculate max health
    // Eat max green red, then max green combinations
    while (greenHerbs >= 1) {
        if (greenHerbs >= 1 && redHerbs >= 1) {
            maxHealth += 10;
            greenHerbs -= 1;
            redHerbs -= 1;
        } else if (greenHerbs >= 3) {
            maxHealth += 10;
            greenHerbs -= 3;
        } else if (greenHerbs >= 2) {
            maxHealth += 3;
            greenHerbs -= 2;
        } else {
            maxHealth += 1;
            greenHerbs -= 1;
        }
    }

    printf("%d", maxHealth);
    return 0;
}