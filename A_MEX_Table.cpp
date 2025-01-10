#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin >> n>>m;

        if(n>m)
        {
            cout<<n+1<<endl;
        }
        else
        {
            cout<<m+1<<endl;
        }
    }
    return 0;
}     