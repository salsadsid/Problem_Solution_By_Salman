#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array and remove duplicates
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());

    int pnt = 0, ans = 0;

    // Find the maximum number of elements within a range of size n
    for (int i = 0; i < a.size(); i++) {
        while (a[i] - a[pnt] >= n) {
            pnt++;
        }
        ans = max(ans, i - pnt + 1);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
