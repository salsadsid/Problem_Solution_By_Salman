// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    int ar1[n];
    int ar2[m];
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }
    int newAr[n+m];

    int a=0,b=0,c=0;

    while(a < n || b<m)
    {
        if(b==m || a<n && ar1[a]<ar2[b])
        {
            newAr[c]=ar1[a];
            a++;
            c++;
        }
        else
        {
            newAr[c]=ar2[b];
            b++;
            c++;
        }
    }

    for(int i=0;i<(n+m);i++)
    {
        cout<<newAr[i]<<" ";
    }

    return 0;
}