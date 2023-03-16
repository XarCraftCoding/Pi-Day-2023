#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    int sign = 1;

    printf("Enter the number of terms to use: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        pi += sign * 4.0 / (2 * i + 1);
        sign *= -1;
    }

    printf("Approximation of pi: %f\n", pi);

    return 0;
}
