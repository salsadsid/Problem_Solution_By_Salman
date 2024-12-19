#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string pattern = "aabb";
    
    for (int i = 0; i < n; ++i) {
        cout << pattern[i % 4];
    }
    
    cout << endl;
    return 0;
}
