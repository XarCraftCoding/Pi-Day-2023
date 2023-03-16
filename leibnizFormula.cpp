#include <iostream>

using namespace std;

int main() {
    int n;
    double pi = 0.0;
    int sign = 1;

    cout << "Enter the number of terms to use: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        pi += sign * 4.0 / (2 * i + 1);
        sign *= -1;
    }

    cout << "Approximation of pi: " << pi << endl;

    return 0;
}
