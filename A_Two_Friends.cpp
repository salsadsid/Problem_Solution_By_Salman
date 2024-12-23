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

        vector<int> v(n+1);
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
        }

        int canCome=0;

        for(int i=1;i<n;i++)
        {
            // if(v[v[i]]== i)
            // {
            //     canCome++;
            // }
            cout<<v[i]<<endl;
        }
        cout<<canCome<<endl;
    }

    return 0;
}