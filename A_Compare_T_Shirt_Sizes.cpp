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
        string a,b;
        cin>>a>>b;

        if(a[a.size()-1] < b[b.size()-1] )
        {
            cout<<">"<<endl;
        }
        else if(a[a.size()-1] > b[b.size()-1] )
        {
            cout<<"<"<<endl;
        }
        else
        {
            
            if(a==b)
            {
                cout<<"="<<endl;
                continue;
            }
            
            map<char,int>amp;
            map<char,int>bmp;

            for(int i=0;i<a.size();i++)
            {
                amp[a[i]]++;
            }

            for(int i=0;i<b.size();i++)
            {
                bmp[b[i]]++;
            }

            if(a[a.size()-1] =='S')
            {
                cout<<(amp['X'] < bmp['X'] ? '>' : '<' )<<endl;
            }
            else
            {
                cout<<(amp['X'] > bmp['X'] ? '>' : '<' )<<endl;
            }
        }
    }

    return 0;
}