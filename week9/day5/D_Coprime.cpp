#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
vector<int> pairs[MAX + 1];

void preprocess_pairs() {
    for (int i = 1; i <= MAX; ++i) {
        for (int j = 1; j <= MAX; ++j) {
            if (__gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> indices[MAX + 1];

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        indices[x].push_back(i);
    }

    int max_sum = -1;

    for (int i = 1; i <= MAX; ++i) {
        for (int j : pairs[i]) {
            if (!indices[i].empty() && !indices[j].empty()) {
                max_sum = max(max_sum, indices[i].back() + indices[j].back());
            }
        }
    }

    cout << max_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    preprocess_pairs();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
