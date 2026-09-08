class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0 , r = 1 ;
        unordered_map<char,int>mpp;
        mpp[s[0]] = 0;
        int cnt = 1 , maxi = 0 ;
        while(r < n){
            if(mpp.find(s[r]) == mpp.end()){
                cnt++;
            }
            else{
                l = mpp[s[r]] + 1 ;
                cnt = r-l+1; 
            }
            maxi = max(maxi,cnt);
            mpp[s[r]] = r;
            r++;
        }
        return maxi;
    }
};
