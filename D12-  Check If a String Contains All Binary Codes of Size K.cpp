class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())
            return false;
        set<string> a;
        for(int i=0;i<=s.size()-k;i++)
        {
            string str=s.substr(i,k);
            a.insert(str);
        }
        if(a.size()==pow(2,k))
            return true;
        return false;
    }
};
