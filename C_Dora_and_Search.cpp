#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i = 0; i < n; i++){
            cin >> ar[i];
        }
        int l = 0;
        int r = n - 1;
        int minV = 1;
        int maxV = n;
        while(l <= r){
            if(ar[l] == minV){
                l++;
                minV++;
            }else if(ar[l] == maxV){
                l++;
                maxV--;
            }else if(ar[r] == minV){
                r--;
                minV++;
            }else if(ar [r] == maxV){
                r--;
                maxV--;
            }else{
                break;
            }
        }
        if(l <= r){
            cout << l+1 << " " << r+1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
}