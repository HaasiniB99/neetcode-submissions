class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n);
        vector<int>right(n);
        int leftProd = 1 , rightProd = 1 ;
        for(int i = 0 ; i < n ; i++){
            left[i] = leftProd;
            leftProd *= nums[i];

            right[n-i-1] = rightProd;
            rightProd *= nums[n-i-1];
        }
        vector<int>res;
        for(int i = 0 ; i < n ; i++){
            int val = left[i] * right[i];
            res.push_back(val);
        }
        return res;
    }
};
