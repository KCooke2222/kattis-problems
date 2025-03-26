#include <stdio.h>
#include <math.h>


int main() {
    // Input
    int k;
    scanf("%d", &k);

    // Calc, using floor
    int num_transactions;

    // Reduce to 0 - 500
    num_transactions += floor(k / 500);
    k = k % 500;

    // Solve optimally
    if (k > 400) {
        num_transactions += 1;
    }
    else if (k > 200) {
        num_transactions += 2;
    }
    else if (k > 0) {
        num_transactions += 1;
    }
    

    // Out
    printf("%d", num_transactions);
}