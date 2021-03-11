 class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
          if(d == 1)
           return new TreeNode(v , root , NULL);  // Base case 
        if(d == 2)
        {
            root->left = new TreeNode(v , root->left , NULL);     // We have to insert Below to this level
            root->right = new TreeNode(v , NULL ,root->right);
        }
        else
        {
            if(root->left) addOneRow(root->left,  v, d-1);   // go into deep
            if(root->right)addOneRow(root->right,  v, d-1);
        }
        return root;
    }
};
