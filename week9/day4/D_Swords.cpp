#include <bits/stdc++.h>

using namespace std;

typedef long long li;

const int N = 200 * 1000 + 13;

int n;
int a[N];

void read() {    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return max(a, b);
}

void solve() {
    int ma = *max_element(a, a + n);
    li sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    int g = ma - a[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, ma - a[i]);
    }    
    li ans = (ma * 1ll * n - sum) / g;
    cout << ans << ' ' << g << endl;
}

int main () {
    read();
    solve();
    return 0;
}
