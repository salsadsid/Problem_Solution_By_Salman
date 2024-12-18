#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
 
bool equals(vector<int>&a, vector<int>&b, int n){
    int dif = inf;
    for(int i=0;i<n;i++){
        if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }
    if(dif < 0) return false; 
    if(dif == inf) return true;
    for(int i=0;i<n;i++){
        if(a[i] - b[i] > dif) return false;
        if(b[i] != 0 && a[i] - b[i] < dif) return false;
    }
    return true;
}
 
void solve(){
    
 
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        cout << (equals(a, b, n) ? "YES\n" : "NO\n");
    }
}