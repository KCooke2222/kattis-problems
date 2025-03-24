#include <stdio.h>
#include <math.h>

double main() {
    // Args
    double d;
    double k;
    scanf("%lf %lf", &d, &k);

    // Calculation
    double distance = d * (2 - pow(2, -k));

    // Output
    printf("%lf", distance);
}