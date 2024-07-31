//https://www.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
     void topologicalUtil(int temp,vector<int> adj[],vector<bool>&vis,stack<int>&s)
	{
	    vis[temp]=true;
	    
	   // list<int>::iterator i;
	    for(auto i=adj[temp].begin();i!=adj[temp].end();++i)
	    {
	       if(vis[*i]==false)
	       {
	           vis[*i]=true;
	           topologicalUtil(*i,adj,vis,s);
	       }
	    }
	    
	    s.push(temp);
	    
	   // return s;
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    stack<int>s;
	    vector<bool>vis(v,false);
	    for(int i=0;i<v;i++)
	    {
	        if(vis[i]==false)
	           topologicalUtil(i,adj,vis,s);
	    }
	    
	    vector<int>ans;
	    while(!s.empty())
	    {
	      ans.push_back(s.top());
	      s.pop();
	    }
	    
	    return ans;
	    
	}
};
