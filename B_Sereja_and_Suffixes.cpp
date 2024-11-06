#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    
    vector<int>vt;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        vt.push_back(x);
    }
    int count=0;
    for(int i=1;i<=m;i++)
    {
        int y;
        cin>>y;
        set<int>st;
        for(int i=y-1;i<vt.size();i++)
        {
            st.insert(vt[i]);
        }

        cout<<st.size()<<endl;
    }

    return 0;
}