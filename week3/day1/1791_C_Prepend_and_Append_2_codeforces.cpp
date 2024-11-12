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
        string s;
        cin>>s;
        int l=0,r=n-1,sum=n;

        while(l<=r)
        {
            if(s[l]==s[r])
            {
                break;
            }
            else
            {
                sum-=2;
                l++,r--;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}