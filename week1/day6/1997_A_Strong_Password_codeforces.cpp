//============================================================================
// Problem     : https://codeforces.com/problemset/problem/1997/A
// Name        : 1997_A_Strong_Password_codeforces.cpp
// Author      : Salman Sadik Siddiquee
// Version     : 1
// Difficuly   : 900
//============================================================================



#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testCase;
    cin>>testCase;
 
    while(testCase--)
    {
        string a;
        cin>>a;
        bool flag=false;
        int i=0;
        char ch;
        for(;i<a.size();i++)
        {
            if(i>0 && a[i]==a[i-1])
            {
                flag=true;
                ch=a[i];
                break;
            }
        }
        string newStr;
        if(flag)
        {
            for(int j=0;j<i;j++)
            {
                // cout<<a[j]<<endl;
                newStr+=a[j];
            }
            if(ch=='z')
            {
                newStr+='a';
            }
            else
            {
                newStr+=char(ch+1);;
            }

            for(int k=i;k<a.size();k++)
            {
                //  cout<<a[k]<<endl;
                newStr+=a[k];
            }
        }
        else
        {
            if(a[0]=='z')
            {
                newStr='a'+a;
            }
            else
            {
                newStr=char(a[0]+1)+a;
            }
        }
        cout<<newStr<<endl;
    }
}