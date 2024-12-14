#include <bits/stdc++.h>
using namespace std;
const int maxN=(1<<15);

vector <int>allPalindromes;

bool isPlaindorme(int x)
{
    string s=to_string(x);
    int len=s.size();

    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return false;
        }
    }

    return true;
}

void markPlaindrome()
{
    for(int i=0;i<maxN;i++)
    {
        bool ok =isPlaindorme(i);
        if(ok)
        {
            allPalindromes.push_back(i);
        }
    }


    // for(auto it:allPalindromes)
    // {
    //     cout<<it<<" ";
    // }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    markPlaindrome();
    // cout<<endl<<allPalindromes.size();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> m(n),cnt(maxN+1);

        for(int i=0;i<n;i++)
        {
            cin>>m[i];
            cnt[m[i]]++;
        }

        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<allPalindromes.size();j++)
            {
                int curr= (m[i]^allPalindromes[j]);
                ans+=cnt[curr];
            }
        }

        cout<<(ans/2)<<endl;
    }

    return 0;
}