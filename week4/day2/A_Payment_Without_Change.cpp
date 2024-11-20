#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,d;

        cin>>a>>b>>c>>d;
        ll aCoinsNeed=d/c;
        ll bCoinNeed=d%c;

        if(bCoinNeed >b)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long sum=(a*c)+b;

            if(sum >= d)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                 cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}