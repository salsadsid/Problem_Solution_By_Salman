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

        vector<int> v(n);
        vector<int> v2(n);
        int vSum=0;
        int v2Sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            vSum+=v[i];
        }

        

        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
            if(i!=0)
            {
                v2Sum+=v2[i];
            }
        }
        int diff=vSum-v2Sum;
        for(int i=1;i<n;i++)
        {
            int diff2=vSum-v[i-1];
            int diff3=v2Sum-v2[i];
            int diff4=diff2-diff3;
            if(diff4>diff)
            {
                diff=diff4;
                vSum=vSum-v[i-1];
                v2Sum=v2Sum-v2[i];;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}