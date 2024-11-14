

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n=arr.size(), l=0,r=0;
        queue<int>q;
        vector<int> sumAr;
        while(r<n)
        {
            if(arr[r]<0)
            {
                q.push(arr[r]);
            }
            if(r-l+1==k)
            {
                if(!q.empty())
                {
                    sumAr.push_back(q.front());
                    if(arr[l]==q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                   sumAr.push_back(0);
                }
                l++,r++;
            }
            else
            {
                r++;
            }
        }
        
        return sumAr;
    }
};