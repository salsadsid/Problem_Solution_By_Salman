#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& x : a) cin >> x;

        vector<int> b({a[n - 1]});
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > b.back()) {
                b.push_back(a[i] % 10);
                b.push_back(a[i] / 10);
            } else {
                b.push_back(a[i]);
            }
        }

        // Check if the sequence is sorted in descending order
        cout << (is_sorted(b.rbegin(), b.rend()) ? "YES" : "NO") << '\n';
    }
    return 0;
}
