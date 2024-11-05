#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        map<int,int> st;
        vector<int> vt;
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(st.find(x)==st.end())
            {
                st[x]=x;
            }
            else
            {
                vt.push_back(x);
            }
        }

        for(auto [a,b]:st)
        {
            cout<<a<<" ";
            // st.pop();
        }
        cout<<endl;
         for(auto a:vt)
        {
            cout<<a<<" ";
            // st.pop();
        }

        // cout<<st.size()<<endl;
    }

    return 0;
}