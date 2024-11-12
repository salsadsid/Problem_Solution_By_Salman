#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    vector<int> ar1(n);
    vector<int> ar2(m);

    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }

    int l=0,r=0,count=0;

    while(r<m)
    {
        if(l<n && ar1[l]<ar2[r])
        {
            l++,
            count++;
        }
        else
        {
            cout<<count<<" ";
            r++;
        }
    }

    return 0;
}