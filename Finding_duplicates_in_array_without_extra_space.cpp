//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=(2*n))
                ans.push_back(i);
        }
        
        if(ans.size()==0)
            ans.push_back(-1);
        return ans;
    }
};


//{ Driver Code Starts.

