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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;

        int h=s.size(),l=0,r=0;
        int count=0;
        int minCount=INT_MAX;
        for(;r<m;r++)
        {
            if(s[r]=='W')
            {
                count++;
            }
        }
        minCount=min(minCount,count);
        // cout<<count<<" "<<minCount<<" "<<l<<" "<<r<<endl;
        while(r<h)
        {
            
            if(s[l]=='W')
            {
                count--;
            }
            l++;
            if(s[r]=='W')
            {
                count++;
            }
            r++;

            minCount=min(minCount,count);
        }

        cout<<minCount<<endl;
    }

    return 0;
}