class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0 , j = n-1 ;
        while(i < j){
            int val = nums[i] + nums[j];
            if(val == target) return {i,j};
            else if(val < target) i++;
            else j--;
        }
    }
};
