#include <bits/stdc++.h>
using namespace std;

// Function to find the smallest divisor of n greater than 1
int min_divisor(int n) {
    for (int d = 2; d <= sqrt(n); ++d) {
        if (n % d == 0) {
            return d;
        }
    }
    return n; // n is a prime number
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        bool found = false;
        for (int x = l; x <= r; ++x) {
            int md = min_divisor(x);
            if (md != x) { // If x is not a prime number
                cout << md << " " << x - md << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
