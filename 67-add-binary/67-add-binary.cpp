class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int lenA = a.size();
        int lenB = b.size();
        
        if(lenA > lenB){
            for(int i=0;i<lenA-lenB;i++){
                b.push_back('0');
            }
        }
        if(lenA < lenB){
            for(int i=0;i<lenB-lenA;i++){
                a.push_back('0');
            }
        }
        string c="";
        int len = max(lenA,lenB);
        int carry=0,val=0;
        for(int i=0;i<len;i++){
            
            val = a[i]+b[i]-2*'0'+carry;
            carry = val/2;
            val = val%2;
            
            cout<<a[i]<<" "<<b[i]<<" | ";
            cout<<val<<" "<<carry<<endl;
            
            c.push_back(val+'0');
        }
        if(carry){
            c.push_back(carry+'0');
        }
        reverse(c.begin(),c.end());
        return c;
    }
};