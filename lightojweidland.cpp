#include <iostream>
#include <iomanip>
#include <numeric>
#include <math.h>
#include <vector>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
double calculateExpectation(int x, int y, double g_per_billion) {
    double g = g_per_billion / 1e9;
    double b = 1.0 - g;
    double expected_boys = 0.0;
    double expected_girls = 0.0;
    for (int boys = 0; boys < x; ++boys) {
        for (int girls = 0; girls < y; ++girls) {
            double probability = pow(b, boys) * pow(g, girls) * (1.0 - pow(b, x - boys)) * (1.0 - pow(g, y - girls));
            expected_boys += boys * probability;
            expected_girls += girls * probability;
        }
    }

    return expected_boys / expected_girls;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int x, y, g;
        cin >> x >> y >> g;

        double ratio = calculateExpectation(x, y, g);

        int numerator = static_cast<int>(ratio * 1e6);
        int denominator = 1e6;
        int gcd_value = gcd(numerator, denominator);

        numerator /= gcd_value;
        denominator /= gcd_value;

        cout << "Case " << t << ": " << numerator << "/" << denominator << endl;
    }

    return 0;
}
