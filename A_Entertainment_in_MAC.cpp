#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string a;
        cin>>a;
        string ra= a;
        reverse(ra.begin(),ra.end());
        cout<<min(a,ra+a)<<endl;
    }

    return 0;
}