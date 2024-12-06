#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        
        if(n%2==0)
        {
            
            cout<<(n/2==k ? "YES" : "NO")<<endl;
        }
        else
        {
            if((n/2)==k || ((n/2)+1)==k)
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