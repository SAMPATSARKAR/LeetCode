/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool path(TreeNode* root, TreeNode* target, vector<TreeNode*> &p){
            if(root == NULL) return false;

            p.push_back(root);
            if(root == target) return true;

            if(path(root->left,target,p) || path(root->right,target,p)) return true;

            p.pop_back();
            return false;
};
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;
        path(root,p,path1);
        path(root,q,path2);
        TreeNode* lca = NULL;
        for(int i=0;i<min(path1.size(), path2.size());i++){
            if(path1[i] != path2[i]){
                break;
            }
            lca = path1[i];
        }
    return lca;
    }
};