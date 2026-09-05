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
            hash[it.second].push_back(it.first);
        }
        vector<int>result;
        for(int i = n ; i >= 0 ; i--){
            for(int num : hash[i]) {
                result.push_back(num);

                if(result.size() == k)
                    return result;
            }
        }
        return result;
    }
};
