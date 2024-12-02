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

        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(n==2)
        {
            cout<<1<<endl;
            cout<<2<<" "<<6<<endl;
        }
        else if(n>2)
        {
            int m=n-1;
            cout<<m<<endl;
            cout<<2<<" "<<6<<endl;

            for(int i=4,j=9;j<=(n*3);i++,j+=3)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;
}