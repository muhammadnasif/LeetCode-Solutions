class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string x = s.substr(1)+s.substr(0,s.length()-1);
        if(x.find(s)==-1){
            return false;
        }
        return true;
    }
};