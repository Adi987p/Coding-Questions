https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1?page=1&company=D-E-Shaw,Uber&difficulty=Easy&sortBy=submissions

void check(Node*node,vector<int>&ans)
{
    if(node==NULL || (node->right==NULL && node->left==NULL))
        return;
    else if(node->right==NULL && node->left!=NULL)
        ans.push_back(node->left->data);
        
    else if(node->right!=NULL && node->left==NULL)
        ans.push_back(node->right->data);

    check(node->left,ans);
    check(node->right,ans);
}
vector<int> noSibling(Node* node)
{
    // code here
    vector<int>ans;
    
    check(node,ans);
    
    if(ans.size()==0)
        ans.push_back(-1);
    
    sort(ans.begin(),ans.end());
    return ans;
}
