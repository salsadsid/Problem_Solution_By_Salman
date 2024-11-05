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
        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;
        bool flag= true;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='R' && a[i]!=b[i])
            {
                flag=false;
                break;
            }
            else if(b[i]=='R' && a[i]!=b[i])
            {
                flag=false;
                break;
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

    return 0;
}