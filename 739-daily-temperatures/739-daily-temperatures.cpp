class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stk;
        vector<int> res(temperatures.size(), 0);
        stk.push(0);
        
        
        for(int i=1;i<temperatures.size();i++){
            if(stk.empty()){
                stk.push(i);
                continue;
            }
            
            while(!stk.empty() &&  temperatures[i] > temperatures[stk.top()]){
                
                res[stk.top()] = i - stk.top();
                stk.pop();
            }
            
            stk.push(i);
        }
        
        while(!stk.empty()){
            res[stk.top()] = 0;
            stk.pop();
        }
        return res;
        
    }
};