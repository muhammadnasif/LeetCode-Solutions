class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int maxLen = max(num1.size(), num2.size());
        vector<string> str(num2.size(), "");
        int appZero = 0, endZero;
        int val1,val2,carry=0,digit;
        for(int i=0;i<num2.size();i++){
            for(int j=0;j<appZero;j++){
                str[i].push_back('0');
            }
            appZero++;
            val2 = num2[i]-'0';
            for(int j=0;j<num1.size();j++){
                val1 = num1[j]-'0';
                val1 = val1*val2+carry;
                digit = val1%10;
                carry = val1/10;
                str[i].push_back(digit+'0');
            }
            if(carry>0){
                str[i].push_back(carry+'0');
                carry=0;
            }
            
            // cout<<"appending zeros end -- "<<<<endl;
            endZero = 2*maxLen-str[i].size();
            for(int j=0;j<endZero;j++){
                str[i].push_back('0');
            }
        }
        string res;
        carry = 0;
        val1 = 0;
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<endl;
        }
        for(int i=0;i<str[0].size();i++){
            for(int j=0;j<str.size();j++){
                cout<<str[j][i]<<" ";
                val1 = val1 + str[j][i]-'0';
            }
            
            val1 += carry;
            digit = val1%10;
            carry = val1/10;
            res.push_back(digit+'0');
            cout<<" | "<<val1<<" "<<digit<<" "<<carry<<endl;
            cout<<endl;
            val1=0;
        }
        reverse(res.begin(), res.end());
        string ans="";
        for(int i=0;i<res.size();i++){
            if(res[i] != '0'){
                ans = res.substr(i, res.size());
                break;
            }
        }
        if(ans==""){
            return "0";
        }
        cout<<"---"<<endl;
        cout<<res<<endl;
        return ans;
    }
};