class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0 , r = n-1 ; 
        int maxi = 0;
        for(int i = 0 ; i < n ; i++){
            int h = min(heights[l],heights[r]);
            int a = h * (r-l);
            maxi = max(maxi,a);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return maxi;
    }
};
