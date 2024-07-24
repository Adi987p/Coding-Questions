// https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=1&company=D-E-Shaw,Uber&difficulty=Easy&sortBy=submissions

vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      
      queue<Node*>q;
      q.push(root);
      
      while(!q.empty())
      {
          Node*temp=q.front();
          q.pop();
          
          ans.push_back(temp->data);
          
          if(temp->left!=NULL)
            q.push(temp->left);
          if(temp->right!=NULL)
            q.push(temp->right);
      }
      return ans;
    }
