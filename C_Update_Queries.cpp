#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;

        set <ll>indcs;

        for(int i=0;i<m;i++)
        {
            ll x;
            cin>>x;

            indcs.insert(--x);
        }

        string q;
        cin>>q;

        sort(q.begin(),q.end());

        ll idx=0;

        for(auto it=indcs.begin();it!=indcs.end();it++)
        {
            ll x=*it;
            s[x]=q[idx];
            idx++;
        }

        cout<<s<<endl;
    }

    return 0;
}