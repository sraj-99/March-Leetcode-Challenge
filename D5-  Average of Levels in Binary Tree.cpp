class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double sum=0.0;
            int c=q.size();
            int no=c;
            while(c--)
            {
                TreeNode* node=q.front();
                sum+=node->val;
                q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            double levelavg=sum/no;
            v.push_back(levelavg);
        }
        return v;
    }
};
