class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return false;
        }
        sort(nums.begin(),nums.end());
        int  n  = nums.size();
        for(int i= 0 ; i < n - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};