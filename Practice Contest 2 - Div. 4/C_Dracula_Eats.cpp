#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int i;
        cin>>i;
        if(i==2)
        {
            cout<<1<<endl;
        }
        else if(i==1)
        {
            cout<<0<<endl;
        }
        else
        {
            int a=i-2;
            int b=a/7;
            cout<<b+1<<endl;
        }
    }
    return 0;
}