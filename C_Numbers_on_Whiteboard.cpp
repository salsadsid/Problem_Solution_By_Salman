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