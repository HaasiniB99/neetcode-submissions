class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMaxi = 0 , rightMaxi = 0;
        vector<int> rightMax(n);
        for (int i = n - 1; i >= 0; i--) {
            rightMaxi = max(rightMaxi,height[i]);
            rightMax[i] = rightMaxi;
        }
        int trapped = 0;
        for (int i = 0; i < n; i++) {
            leftMaxi = max(leftMaxi,height[i]);
            if (height[i] < leftMaxi && height[i] < rightMax[i])
                trapped += min(leftMaxi, rightMax[i]) - height[i];
        }
        return trapped;
    }
};
