#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char arr[8][8];
        vector<int> v;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='R')
                {
                    v.push_back(i);
                }
            }
        }

        for(int i:v)
        {
            bool ok=true;
            for(int j=0;j<8;j++)
            {
                if(arr[i][j]!='R')
                {
                    ok=false;
                    break;
                }
            }
            if(ok) {
                cout<<"R"<<endl;
                return;
            }
        }
        cout<<"B"<<endl;
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
    return 0;
}