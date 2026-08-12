class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brtue --> analyse all the duo against the target;
        // int sum = 0;
        // vector<int> ans;
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         sum = nums[i]+nums[j];
        //         if(sum == target ){
        //             ans.push_back({i,j});
        //             return ans;
        //         }
        //     }
        // }
        // return ans;

        // hashing approach where i look for the remaining as we want ---> nums[j] = target -
        // nums[i];
        int remaining = 0;
        int n = nums.size();
       
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            remaining = target - nums[i];
            if (mpp.find(remaining)!=mpp.end()) {
                return {mpp[remaining],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
