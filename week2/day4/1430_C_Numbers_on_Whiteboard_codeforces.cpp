//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1430/C
// Name        : 1430_C_Numbers_on_Whiteboard_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

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

        cout<<2<<endl<<n<<" "<<n-1<<endl;

        int a= n;
        int b= n-2;
        while(a>=3 && b>=1)
        {
            cout<<a<<" "<<b<<endl;
            a--;
            b--;
        }
    }

    return 0;
}