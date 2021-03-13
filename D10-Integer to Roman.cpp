class Solution {
public:
    vector<string> c{"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    vector<int> a{1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string intToRoman(int num) {
        string no;
        int excepans=0;
        unordered_map<int,string> m;
        for(int i=0;i<a.size();i++)
        {
            m.insert(make_pair(a[i],c[i]));
        }
        while(num)
        {
            for(int i=12;i>=0;i--)
            {
               if(num>=a[i])
               {
                   no+=m[a[i]];
                   num-=a[i];
                   break;
               }
            }
        }
        return no;
    }
};
