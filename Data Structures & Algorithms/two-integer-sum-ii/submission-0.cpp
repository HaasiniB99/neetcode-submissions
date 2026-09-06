class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =  numbers.size();
        int l = 0 , r = n-1 ;
        vector<int>ans;
        while(l < r){
            int val = numbers[l] + numbers[r];
            if(val == target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(val < target) l++;
            else r--;
        }
        return ans;
    }
};
