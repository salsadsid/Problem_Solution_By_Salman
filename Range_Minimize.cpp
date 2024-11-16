#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vt;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vt.push_back(x);
        }
        sort(vt.begin(),vt.end());
        
        if (n <= 3) {
            cout << 0 << endl;
            continue;
        }


        int opnt1= vt[n-1]-vt[2];
        int opnt2= vt[n-3]-vt[0];
        int opnt3= vt[n-2]-vt[1];

        cout<<min({opnt1, opnt2, opnt3})<<endl;
    }
    return 0;
}