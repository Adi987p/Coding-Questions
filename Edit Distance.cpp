// https://www.geeksforgeeks.org/problems/edit-distance3702/1
//Memoization
class Solution {
  public:
    int solve(string str1,string str2,int i,int j,vector<vector<int>>&dp)
    {
        //base case
        int k = str1.size();
        int l = str2.size();
        if(i==k)
        {
            return l-j;
        }
        if(j==l)
        {
            return k-i;
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=0;
        if(str1[i]==str2[j])
            return solve(str1,str2,i+1,j+1,dp);
        
        else
        {
            //insert
            int insertAns= 1+solve(str1,str2,i,j+1,dp);
            
            //delete
            int deleteAns= 1+solve(str1,str2,i+1,j,dp);
            
            //replace
            int replaceAns= 1+solve(str1,str2,i+1,j+1,dp);
            
            ans=min(insertAns,min(deleteAns,replaceAns));
        }
        
        return dp[i][j]=ans;
    }
    int editDistance(string str1, string str2) {
        // Code here
        vector<vector<int>>dp(str1.size(),vector<int>(str2.size(),-1));
        return solve(str1,str2,0,0,dp);
    }
};

//Tabulation;
    int solTab(string str1,string str2)
    {
        vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
        
        for(int j=0;j<str2.size();j++)
        {
            dp[str1.size()][j]=str2.size()-j;
        }
        
        for(int i=0;i<str1.size();i++)
        {
            dp[i][str2.size()]=str1.size()-i;
        }
        
        for(int i=str1.size()-1;i>=0;i--)
        {
            for(int j=str2.size()-1;j>=0;j--)
            {
                int ans=0;
                if(str1[i]==str2[j])
                    ans=dp[i+1][j+1];
        
                 else
                {
                    //insert
                    int insertAns= 1+dp[i][j+1];
            
                    //delete
                    int deleteAns= 1+dp[i+1][j];
            
                    //replace
                    int replaceAns= 1+dp[i+1][j+1];
            
                    ans=min(insertAns,min(deleteAns,replaceAns));
                }
                dp[i][j]=ans;
                
            }
        }
        return dp[0][0];
    }
