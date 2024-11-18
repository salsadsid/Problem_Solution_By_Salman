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
        int areaNeed=n-2;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i]=x;
            mp[x]++;
        }
        
        int x,z;
        for(int i=0;i<n;i++)
        {
            if(areaNeed%v[i]==0)
            {
                x =v[i];
                z= areaNeed/x;
                // cout<<x<<" "<<z<<mp[x]<<endl;
                if(x==z && mp[x] >1)
                {
                    break;
                }
                
                if(mp[x] ==1 && x==z)
                {
                    continue;
                }

                if(mp[z])
                {
                    break;
                } 
            }
        }
        cout<<x<<" "<<z<<endl;
    }
    return 0;
}