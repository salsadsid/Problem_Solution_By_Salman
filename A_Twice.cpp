#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
      
            map <int,int>mp;
            for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                mp[x]++;
            }

            int maxSum=0;
            for (auto it:mp)
            {
                if(it.second>1)
                {
                    maxSum+=(it.second/2);
                }
            }

            cout<<maxSum<<endl;
        
    }
    return 0;
}