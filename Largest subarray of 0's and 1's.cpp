//https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1?page=5&company=Amazon&difficulty=Easy&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s

class Solution{
  public:
  
    int maxLen(int arr[], int n)
    {
        // Your code here
        int sum=0;
        unordered_map<int,int>m;
        m[0]=-1;
        int maxlen=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                sum+=-1;
            else
            sum+=1;
            
            if(m.find(sum)!=m.end())
            {
                if(maxlen<(abs(m[sum]-i)))
                    maxlen=abs(m[sum]-i);
            }
            else
            {
                m[sum]=i;
            }
        }
        
        return maxlen;
        
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
