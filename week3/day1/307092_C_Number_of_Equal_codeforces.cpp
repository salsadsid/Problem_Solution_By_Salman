//============================================================================
// Problem     : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
// Name        : 307092_C_Number_of_Equal_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
     int n,m;
    cin>>n>>m;

    vector<int> ar1(n);
    vector<int> ar2(m);

    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>ar2[i];
    }

    int l=0,r=0;
    long long int sum=0;

    while(l<n && r<m)
    {
        int curr=ar1[l], cnt1=0,cnt2=0;

        while(l<n && ar1[l]==curr)
        {
            cnt1++;
            l++;
        }
        //  while(r<m && ar2[r]!=curr)  is no right
        while(r<m && ar2[r]<curr)
        {
            r++;
        }
        while(r<m && ar2[r]==curr)
        {
            r++;
            cnt2++;
        }

        sum+=(1LL*cnt1*cnt2);
    }

    cout<<sum<<endl;
    return 0;
}