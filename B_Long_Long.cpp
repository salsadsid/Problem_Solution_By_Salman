#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll testCase;
    cin>>testCase;
    while(testCase--)
    {
        ll n;
        cin>>n;
        ll ar[n];

        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        ll sum=0, flip=0;
        bool flag= false;

        for(ll i=0;i<n;i++)
        {
            sum+=abs(ar[i]);

            if(ar[i]<0)
            {
                if(!flag)
                {
                    flip++;
                    flag=true;
                }
            }
            else if(ar[i]!=0)
            {
                flag=false;
            }
        }

        cout<<sum<<" "<<flip<<endl;
    }

    return 0;
}