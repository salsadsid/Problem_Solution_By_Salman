//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1722/C
// Name        : 1722_C_Word_Game_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 800
//============================================================================



#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
         map<string,int> mp1,mp2,mp3;
        int b;
        cin>>b;
        for(int i=1;i<4;i++)
        {
            
            for(int j=0;j<b;j++)
            {
                string a;
                cin>>a;
                // cout<<i<<" ";
                if(i==1)
                {
                    // cout<<a<<" ";
                    mp1[a]=3;
                    if(mp2.find(a)!=mp2.end()&& mp3.find(a)!=mp3.end())
                    {
                        mp1[a]=0;
                        mp2[a]=0;
                        mp3[a]=0;
                    }
                    else if(mp3.find(a)!=mp3.end())
                    {
                        mp3[a]=1;
                        mp1[a]=1;
                    }
                    else if(mp2.find(a)!=mp2.end())
                    {
                        mp2[a]=1;
                        mp1[a]=1;
                    }
                }
                else if(i==2)
                {
                    // cout<<a<<" ";
                    mp2[a]=3;
                    if(mp1.find(a)!=mp1.end()&& mp3.find(a)!=mp3.end())
                    {
                        mp1[a]=0;
                        mp2[a]=0;
                        mp3[a]=0;
                    }
                    else if(mp3.find(a)!=mp3.end())
                    {
                        mp3[a]=1;
                        mp2[a]=1;
                    }
                    else if(mp1.find(a)!=mp1.end())
                    {
                        mp2[a]=1;
                        mp1[a]=1;
                    }
                }
                else
                {
                    // cout<<a<<" ";
                    mp3[a]=3;
                    if(mp1.find(a)!=mp1.end()&& mp2.find(a)!=mp2.end())
                    {
                        mp1[a]=0;
                        mp2[a]=0;
                        mp3[a]=0;
                    }
                    else if(mp2.find(a)!=mp2.end())
                    {
                        mp3[a]=1;
                        mp2[a]=1;
                    }
                    else if(mp1.find(a)!=mp1.end())
                    {
                        mp3[a]=1;
                        mp1[a]=1;
                    }
                }
            }
        }

        int sum1=0,sum2=0,sum3=0;
        
        for(auto it1=mp1.begin(),it2=mp2.begin(),it3=mp3.begin();it1!=mp1.end();it1++,it2++,it3++)
        {   
            sum1+=it1->second;
            sum2+=it2->second;
            sum3+=it3->second;
        }

        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    }
    
    return 0;
}