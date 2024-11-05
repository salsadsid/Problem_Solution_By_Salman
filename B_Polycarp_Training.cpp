#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    map<int,int> vn;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vn[a]=a;
    }
    // sort(vn.begin(),vn.end());

    // for(int g:vn)
    // {
    //     cout<<g.f<<endl;
    // }
    int count=0;
    int i=1;
    for(auto it=vn.begin();it!=vn.end();++it)
    {
        // cout<<vn[i]<<endl;
        
        if(it->first>=i)
        {
            count++;
        }
        else
        {
            break;
        }
        i++;
    }

    cout<<count<<endl;


    return 0;
}