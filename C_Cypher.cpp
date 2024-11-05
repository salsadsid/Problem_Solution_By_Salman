#include <bits/stdc++.h>
using namespace std;

int finalMoveFunc(string a,int lastStage)
{
    int moves[10]={0,1,2,3,4,5,6,7,8,9};
    // cout<<lastStage<<endl;
    int finalMove=lastStage;

    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]=='D' && finalMove==9)
        {
            // cout<<"fast"<<endl;
            finalMove=0;
        }
        else if (a[i]=='U' && finalMove==0)
        {
            // cout<<"second"<<endl;
            finalMove=9;
        }
        else if(a[i]=='D')
        {
            // cout<<"third"<<endl;
            finalMove=moves[finalMove+1];
        }
        else
        {
            // cout<<"fouth"<<endl;
            finalMove=moves[finalMove-1];
        }
        // cout<<finalMove<<endl;
    }

    

    return finalMove;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int chars;
        cin>>chars;

        int pattern[chars];

        for(int i=0;i<chars;i++)
        {
            cin>>pattern[i];
        }

        

        for(int i =0;i<chars;i++)
        {
            int a;
            cin>>a;
            string aStr;
            cin>>aStr;
            int x= finalMoveFunc(aStr,pattern[i]);
            pattern[i]=x;
        }

        for(int i=0;i<chars;i++)
        {
            cout<<pattern[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}