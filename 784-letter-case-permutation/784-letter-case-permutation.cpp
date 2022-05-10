class Solution {
public:
    
    void recursion(string s, vector<string>& res,int pos, int maxDeep, int depth=0){
        //base case
        // cout<<s<<" "<<pos<<endl;
        // cout<<"depth -- "<<depth<<endl;
        if(maxDeep==depth){
            cout<<s<<" "<<pos<<endl;
            res.push_back(s);
            return;
        }
        for(int i=pos;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                recursion(s,res,i+1, maxDeep, depth+1);
                s[i] = s[i]-32;
                recursion(s,res,i+1, maxDeep, depth+1);
                s[i] = s[i]+32;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                recursion(s,res,i+1,maxDeep, depth+1);
                s[i] = s[i]+32;
                recursion(s,res,i+1, maxDeep, depth+1);
                s[i] = s[i]-32;
            }
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        int maxDeep=0;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                maxDeep++;
            }
            
        }
        recursion(s,res,0, maxDeep);
        return res;
    }
};