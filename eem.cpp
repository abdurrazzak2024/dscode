
#include <iostream>
#include <numeric>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int x, y, g;
        cin >> x >> y >> g;

        int numerator = 1;
        int denominator = 1;

        cout << "Case " << t << ": " << numerator << "/" << denominator << endl;
    }

    return 0;
}
