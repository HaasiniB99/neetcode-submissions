class Solution {
//When we move the shorter side, we're not saying:
//"I know the next wall will be taller."
//We don't know that.
//We're saying:
//"I know that keeping this shorter wall cannot give me a better answer."
//That's what makes the move safe.
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
