class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> arr(70005, 0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]+30000]++;
        }
        int val;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                val = i-30000;
            }
        }
        return val;
    }
};