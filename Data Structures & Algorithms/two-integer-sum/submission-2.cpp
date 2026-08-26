class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < n ; i++){
            int rem = target - nums[i];
            //Before accessing something when your algorithm requires at least one element-->then you use mpp.empty()
            if(mpp.find(rem) != mpp.end()){
                return {mpp[rem],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
