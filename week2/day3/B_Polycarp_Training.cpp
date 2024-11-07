#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>vt;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        vt.push_back(x);
    }
    sort(vt.begin(),vt.end());
    int count=0;
    for(int i=1,j=0;j<n;j++)
    {
        if(i<= vt[j])
        {
            count++;
            i++;
        }
    }

    cout<<count<<endl;


    return 0;
}