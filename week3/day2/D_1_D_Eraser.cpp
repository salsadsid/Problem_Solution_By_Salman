#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int optn=0;

        for (int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                optn++;
                i+=k-1;
            }
        }

        cout<<optn<<endl;
    }

    return 0;
}
