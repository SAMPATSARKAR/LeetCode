/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sol(TreeNode* root,int &bal){
        if(root==NULL ){
            return 0;
        }
        int l = sol(root->left,bal);
        int r = sol(root->right,bal);
        if(abs(r-l)>1){
            bal=0;
        }
        int h = 1+max(l,r);
        return h;
    }
    bool isBalanced(TreeNode* root) {
        int bal=1;
        sol(root,bal);
        if(bal){
            return true;
        }
        return false;
        
    }
};