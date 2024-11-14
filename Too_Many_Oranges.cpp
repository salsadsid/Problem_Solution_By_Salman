#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int a,b;
        cin>>a>>b;
        
        int low=a*10;
        int high=a*12;

        if(b<low || b>high)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}