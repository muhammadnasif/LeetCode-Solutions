class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x=0;
        for(int i=0;i<32;i++){
            if(n&1){
                n = n>>1;
                x = x<<1;
                x = x|1;
                
            }
            else{
                n = n>>1;
                x = x<<1;
            }
        }
        return x;
    }
};