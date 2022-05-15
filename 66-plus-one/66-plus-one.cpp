class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int i=len-1;
        int carry = 0;
        while(i>=0){
            // cout<<len<<" "<<digits[i]<<" "<<i<<endl;
            if(i+1==len){
                // cout<<"a"<<endl;
                if(digits[i]+1 == 10){
                    // cout<<"b"<<endl;
                    carry = 1;
                    digits[i] = 0;    
                }
                else{
                    // cout<<"c"<<endl;
                    carry=0;
                    digits[i]+=1;
                }
            }
            if(carry>0 && i+1!=len){
                if(digits[i]+carry > 9){
                    // cout<<"d"<<endl;
                    digits[i] = digits[i]+carry-10;
                    carry = 1;
                }
                else{
                    // cout<<"e"<<endl;
                    digits[i] = digits[i]+carry;
                    carry=0;
                }
            }
            
            i--;
        }
        if(carry >0){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};