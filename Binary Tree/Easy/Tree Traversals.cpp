void InOrder(TreeNode *root, vector<int>& result){
    if(root == nullptr) return;
    InOrder(root->left, result);
    result.push_back(root-> data);
    InOrder(root->right, result);
}
void PreOrder(TreeNode *root, vector<int>& result){
    if(root == nullptr) return;
    result.push_back(root-> data);
    PreOrder(root->left, result);
    PreOrder(root->right, result);
}
void PostOrder(TreeNode *root, vector<int>& result){
    if(root == nullptr) return;
    PostOrder(root->left, result);
    PostOrder(root->right, result);
    result.push_back(root-> data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root) {
    vector<vector<int>> traversals(3);
    InOrder(root, traversals[0]);
    PreOrder(root, traversals[1]);
    PostOrder(root, traversals[2]);
    return traversals;
}