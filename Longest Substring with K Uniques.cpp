/*
https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/


#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	class Solution {
    public:
        int longestKSubstr(string &s, int k) {
        // your code here
        
        int n=s.size();
        int l=0,r=0,ans=-1;
        map<char,int>mp;
        
        while(r<n)
        {
            mp[s[r]]++;
            
            if(mp.size()==k)
            {
                ans=max(ans,r-l+1);
            }
            else
            {
                while(mp.size()>k)
                {
                    mp[s[l]]--;
                    if(mp[s[l]]==0 && l<=r)
                    {
                        mp.erase(s[l]);
                    }
                    
                    l++;
                }
            }
            r++;
        }
        
        return ans;
        }
    };
}