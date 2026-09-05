class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> hash(n + 1);
        for(auto &it : mpp){
            hash[it.second] = it.first;
        }
        vector<int>result;
        for(int i = n ; i >= 0 ; i--){
            if(result.size() == k) break;
            result.push_back(hash[i]);
        }
        return result;
    }
};
