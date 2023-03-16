#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int n;
    double x, y;
    int count = 0;
    double pi;

    printf("Enter the number of points to generate: ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1) {
            count++;
        }
    }

    pi = 4.0 * count / n;

    printf("Approximation of pi: %f\n", pi);

    return 0;
}
