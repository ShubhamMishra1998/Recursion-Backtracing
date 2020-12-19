class Solution {
    
    vector<string> letterCombinations1(string digits,map<int,string> m1) {
       if(digits.size()==0)
       {
           vector<string> ans;
           ans.push_back("");
           return ans;
       }
       int mps=digits[0]-'0';
       digits.erase(digits.begin());
        vector<string> ans1=letterCombinations1(digits,m1);
        vector<string> ans2;
        for(int i=0;i<m1[mps].size();i++)
        {
            for(string s:ans1)
            {
                ans2.push_back(m1[mps][i]+s);
            }
        }
        return ans2;
    }
    
    
public:
    vector<string> letterCombinations(string digits) {
       map<int,string> m1;
    m1[2]="abc";
    m1[3]="def";
    m1[4]="ghi";
    m1[5]="jkl";
    m1[6]="mno";
    m1[7]="pqrs";
    m1[8]="tuv";
    m1[9]="wxyz";
        vector<string> ans;
        if(digits.size()==0)
            return ans;
        return letterCombinations1(digits,m1);
    }
};
