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

        string s;
        cin>>s;

        stack<char> st;

        int cnt=0;
        for(auto i:s)
        {
            if(!st.empty() && st.top()!=i)
            {
                
                cnt++;
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }

        if(cnt%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            
            cout<<"Zlatan"<<endl;
        }
    }

    return 0;
}