//============================================================================
// Problem     : https://codeforces.com/contest/903/problem/C
// Name        : 903_C_Boxes_Packing_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================


#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    int vboxes = 0;
    for (auto p : freq) {
        cout<<p.first<<" "<<p.second<<endl;
        vboxes = max(vboxes, p.second);
    }
    
    cout << vboxes << endl;

    return 0;
}
