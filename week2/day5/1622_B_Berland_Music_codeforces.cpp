//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1622/B
// Name        : 1622_B_Berland_Music_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
//============================================================================

#include<bits/stdc++.h>
using namespace std;
string s;
int x;
int pre[200005],mod[200005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;


        for(int i=0;i<n;i++){
            cin>>x;
            pre[x-1]=i;
        }
        cin>>s;
        int fq=1;
        for(char c='0';c<='1';c++)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[pre[i]]==c)
                    {
                        mod[pre[i]]=fq++;
                    }
                }
            }
        for(int i=0;i<n;i++)
        {
            cout<<mod[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}