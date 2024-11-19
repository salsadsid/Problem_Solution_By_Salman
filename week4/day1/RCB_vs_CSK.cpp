#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;

    cin>>a>>b;

    if(b>a)
    {
        cout<<"CSK"<<endl;
    }
    else
    {
        if((b+18)<=a)
        {
            cout<<"RCB"<<endl;
        }
        else
        {
            cout<<"CSK"<<endl;
        }
    }

    return 0;
}