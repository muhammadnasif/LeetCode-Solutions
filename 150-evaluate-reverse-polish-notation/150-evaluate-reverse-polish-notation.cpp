class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1){
            return stoi(tokens[0]);
        }
        stack<int> stk;
        int val1,val2;
        for(string str : tokens){
            if(str.size()>1 || isdigit(str[0])){
                stk.push(stoi(str));
            }
            else{
                val1 = stk.top();
                stk.pop();
                val2 = stk.top();
                stk.pop();
                if(str=="+"){
                    val1 += val2;
                }
                else if(str=="-"){
                    val1 = val2 - val1;
                }
                else if(str=="*"){
                    val1 *= val2;
                }
                else if(str=="/"){
                    val1 = val2/val1;
                }
                stk.push(val1);
            }
        }
        return stk.top();
    }
};