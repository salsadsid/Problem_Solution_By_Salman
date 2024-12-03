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
        int a,k;
        cin>>a>>k;
        
        if(k==a-1)
        {
            for(int i=1;i<=a;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=1;i<=k;i++)
            {
                cout<<i<<" ";
            }

            for(int i=a;i>k;i--)
            {
                cout<<i<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}