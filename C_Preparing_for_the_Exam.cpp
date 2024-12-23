#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;


        vector<int>mL(m);
        vector<int>kL(k);

        for(int i=0;i<m;i++)
        {
            cin>>mL[i];
        }
        string kS;
        for(int i=0;i<k;i++)
        {
            cin>>kL[i];
            kS+=to_string(kL[i]);
        }

        int dif=n-k;

        if(dif>1)
        {
            for(int i=0;i<m;i++)
            {
                cout<<'0';
            }
            cout<<endl;
            continue;
        }
        if(n==k)
        {
            for(int i=0;i<m;i++)
            {
                cout<<'1';
            }
            cout<<endl;
            continue;
        }

        string mS;

        for(int i=0;i<m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(mL[i]!=j)
                {
                    mS+=to_string(j);
                }
            }
            if(mS==kS)
            {
                cout<<1;
                
            }
            else
            {
                cout<<0;
            }
            mS="";
        }
        cout<<endl;
        // int pos=0;
        // for(int i=0;i<n;i++)
        // {
        //     if((i+1) !=kL[i])
        //     {
        //         pos=i+1;
        //         break;
        //     }
        // }

        // for(int i=0;i<m;i++)
        // {
        //     if(pos==mL[i])
        //     {
        //         cout<<1;
        //     }
        //     else
        //     {
        //         cout<<0;
        //     }
        // }

        // cout<<endl;
        
    }
    return 0;
}