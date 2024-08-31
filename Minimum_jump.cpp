//https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&difficulty=Medium&status=unsolved&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
  
    int minJumps(vector<int>& arr) {
        // Your code here
        int des=0;
        int pos=0;
        int jump=0;
        
        for(int i=0;i<arr.size()-1;i++)
        {
            des=max(des,arr[i]+i);
            
            if(pos==i)
            {
                pos=des;
                jump++;
            }
            
            if(pos>=arr.size()-1)
                return jump;
        }
        
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
