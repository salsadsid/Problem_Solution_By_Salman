#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();
        
        int query;
        cin >> query;
        while (query--)
        {
            int index, value;
            cin >> index >> value;
            s[index - 1] = to_string(value)[0];
            bool flag = false;
            if(s.length()>3)
            {
                for(int i=0;i<s.length()-3;i++)
                {
                    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}


