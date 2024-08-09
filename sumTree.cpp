/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  int findSum(Node*root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return root->data;
    
    int l=findSum(root->left);
    int r=findSum(root->right);
    
    if(root->data==l+r)
        return root->data+l+r;
    else
        return -1;
}
    bool isSumTree(Node* root) {
        // Your code here
       return findSum(root)!=-1;
    }
};
