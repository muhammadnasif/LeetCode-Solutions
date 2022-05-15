class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> newNum;
        vector<int> res;
        while(k!=0){
            newNum.push_back(k%10);
            k /=10;
        }
        reverse(newNum.begin(), newNum.end());
        
        int i = num.size()-1;
        int j = newNum.size()-1;
        int val=0, carry=0;
        int val1,val2;
        while(j>=0 || i>=0){
            if(i>=0){
                val1 = num[i--];
            }
            else{
                val1 = 0;
            }
            if(j>=0){
                val2 = newNum[j--];
            }
            else{
                val2 = 0;
            }
            
            val = val1+val2+carry;
            
            carry = val/10;
            val = val%10;
            
            res.push_back(val);
        }
        if(carry){
            res.push_back(carry);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};