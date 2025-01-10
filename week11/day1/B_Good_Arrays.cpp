#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long sum_a = 0, count_ones = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum_a += a[i];
        if (a[i] == 1) {
            count_ones++;
        }
    }

    if (sum_a >= count_ones + n && n > 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
