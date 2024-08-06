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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        posto(root, ans);
        return ans;
    }
    void posto(TreeNode* curr, vector<int>&postorder){
        if(curr == 0)return;
        posto(curr->left, postorder);
        posto(curr->right, postorder);
        postorder.push_back(curr->val);
    }
};