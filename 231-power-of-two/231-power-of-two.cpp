class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==-2147483648){
            return false;
        }
        if(n & n-1 || n==0){
             return false;
        }
        return true;
    }
};