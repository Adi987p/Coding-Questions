//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1

/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
public:
    // Function to check whether a binary tree is balanced or not.
    int height(Node* root) {
        if (root == NULL)
            return 0;
        else
            return max(height(root->left), height(root->right)) + 1;
    }

    bool isBalanced(Node* root) {
        // Base case: an empty tree is balanced.
        if (root == NULL)
            return true;

        // Check if the left subtree is balanced.
        bool leftBalanced = isBalanced(root->left);

        // Check if the right subtree is balanced.
        bool rightBalanced = isBalanced(root->right);

        // Calculate the balance factor for the current node.
        int balanceFactor = abs(height(root->left) - height(root->right));

        // Check if the current node is balanced.
        return leftBalanced && rightBalanced && (balanceFactor <= 1);
    }
};
