class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int half=candyType.size()/2;
        for(int i:candyType)
        {
            if(s.find(i)==s.end())
                s.insert(i);
        }
        int siof=s.size();
        if(siof==half)
            return siof;
        else if(siof>half)
            return half;
        return siof;
    }
};
