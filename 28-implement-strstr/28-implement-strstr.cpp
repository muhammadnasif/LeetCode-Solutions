class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0){
            return 0;
        }
        if(haystack.length()<needle.length()){
            return -1;
        }
        int totalChar = 256;
        int prime = 2351;
        int heuHay = 0;
        int heuNed = 0;
        bool matched;
        for(int i=0;i<needle.length();i++){
            heuHay = (heuHay + haystack[i]*totalChar)%prime;
            heuNed = (heuNed + needle[i]*totalChar)%prime;
            // cout<<heuHay<<" "<<heuNed<<endl;
        }
        // cout<<"heuHay--"<<heuHay<<endl;
        // cout<<"heuNed--"<<heuNed<<endl;
        // cout<<power(needle.length()-1)<<endl;
        for(int i=0; i <= haystack.length()-needle.length() ;i++){
            if(heuHay == heuNed){
                matched = true;
                for(int j=0;j<needle.length();j++){
                    if(haystack[i+j] != needle[j]){
                        matched = false;
                        break;
                    }
                }
                
                if(matched){
                    return i;
                }
                
            }
            if(i < haystack.length()-needle.length()){
                // cout<<haystack[i]<<" "<<haystack[i+needle.length()]<<endl;
                // cout<<heuHay<<"-"<<(haystack[i]*)%prime<<endl;
                // heuHay = (heuHay-(haystack[i]*totalChar)%prime)%prime;
                // heuHay = (heuHay+haystack[i+needle.length()])%prime;
                // cout<<"heuHay => "<<heuHay<<endl;
                
                heuHay = (heuHay + (haystack[i+needle.length()]-haystack[i])*totalChar)%prime;
                if(heuHay<0){
                    heuHay += prime;
                }    
            }
            
        }
        return -1;
    }
};