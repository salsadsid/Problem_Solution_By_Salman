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

        string s,m;
        cin>>s>>m;

        if(s==m)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        
        if(pos!=-1)
        {
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=m[i])
                {
                    if(pos>i)
                    {
                        flag=false;
                        break;
                    }
                }
            }

            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}