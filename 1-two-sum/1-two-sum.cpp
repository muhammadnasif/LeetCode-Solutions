class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> n;
        n= nums;
        sort(nums.begin(), nums.end());
        
        vector<int> arr;
        int i , j ;
        int tmp = 0 ;
        for (i = 0, j = nums.size()-1; i<j ;i++){
            tmp = nums[i] + nums[j];
            if(tmp<target){
                continue;
            }
            else if(tmp>target){
                j--;
                i--;
            }
            else {
                bool first = false, second = false;
                for (int k = 0 ; k < nums.size() ; k++){
                    if(!first && nums[i]==n[k]){
                        arr.push_back(k);
                        first=true;
                    }
                    else if(!second && nums[j]==n[k]){
                        arr.push_back(k);
                        second=true;
                    }
                    if(first && second){
                        break;
                    }
                    
                }
                
                break;
            }
            
        }
        return arr;
        
    }
};