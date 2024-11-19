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
        int a,b,c,d;

        cin>>a>>b>>c>>d;
        int possibleSum=(a*c)+b;
        int maxAcoinsNeed=d/c;
        int minBcoinsNeed=d%c;

        cout<<(maxAcoinsNeed >= a && minBcoinsNeed >=b ? "YES" :"NO")<<endl;
    }

    return 0;
}