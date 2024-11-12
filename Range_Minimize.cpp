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
        vector<int> vt;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vt.push_back(x);
        }

        if(n>1)
        {
            sort(vt.begin(),vt.end());
            vt.pop_back();
            vt.pop_back();
            for(auto it:vt)
            {
                cout<<it<<" ";
            }
            if(vt.size()>1)
            {
                cout<<vt[vt.size()-1]-vt[0]<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}