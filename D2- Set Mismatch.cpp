class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        vector<int> v;
        for(int i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            if((i.second)==2)
                v.push_back(i.first);
        }
        for(int i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())
                v.push_back(i);
        }
        return v;
    }
};
