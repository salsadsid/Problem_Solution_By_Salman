#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    long long n,k;
    cin>>n>>k;

    vector<int>vt(n);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vt[i]=x;
    }

    unordered_map<int,int>freq;
    int l=0,r=0;
    long long sum=0,ans=0;
    int unique=0;

    while(r<n)
    {
        freq[vt[r]]++;
        if(freq[vt[r]]==1)
        {   
            unique++;
        }

        while(unique>k)
        {
            freq[vt[l]]--;
            if(freq[vt[l]]==0)
            {
                unique--;
            }
            l++;
        }

        ans+=(r-l+1);
        r++;

    }

    cout<<ans<<endl;

    return 0;
}