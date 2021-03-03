class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int ans;
        for(int i=1;i<=n;i++)
        {
            if(s.find(0)==s.end())
                return 0;
            if(s.find(i)==s.end()){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
