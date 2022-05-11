class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isAscending = true;
        bool isDescending = false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                isAscending = true;
            }
            else if((nums[i]>nums[i-1])){
                isAscending = false;
                break;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                isDescending = true;
            }
            else if(nums[i]<nums[i-1]){
                isDescending = false;
                break;
            }
        }
        
        if((!isAscending && isDescending) || (isAscending && !isDescending)){
            return true;
        }
        return false;
    }
};