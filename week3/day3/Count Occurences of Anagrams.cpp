//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n=txt.size();
	    int m=pat.size();
	    
	    vector<int>patFq(26,0);
	    vector<int>windowFq(26,0);
	    
	    
	    for(int i=0;i<m;i++)
	    {
	        patFq[pat[i]-'a']++;
	        windowFq[txt[i]-'a']++;
	    }
	    int count=0;
	    
	    if(patFq==windowFq)count++;
	    
	    
	    for(int i=m;i<n;i++)
	    {
	        windowFq[txt[i]-'a']++;
	        windowFq[txt[i-m]-'a']--;
	        
	        if(patFq==windowFq) count++;
	    }
	    
	    return count;
	}
	

};