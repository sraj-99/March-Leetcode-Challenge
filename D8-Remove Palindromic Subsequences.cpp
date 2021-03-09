class Solution {
public:
    bool palindrome(string s)
    {
        int b=0;
        int e=s.size()-1;
        while(b<=e)
        {
            if(s[b]!=s[e])
                return false;
            b++;
            e--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
       if(s.size()==0)
           return 0;
        if(palindrome(s))
            return 1;
        return 2;
    }
};
