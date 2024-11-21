#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int firstEle=abs(a-1);
        int secondEle=abs(c-b)+abs(c-1);

        if(firstEle>secondEle)
        {
            cout<<2<<endl;
        }
        else if (firstEle<secondEle)
        {
            cout<<1<<endl;
        }
        else
        {
             cout<<3<<endl;
        }

    }
    return 0;
}