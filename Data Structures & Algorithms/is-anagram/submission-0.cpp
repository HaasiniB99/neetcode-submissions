class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int s_map[26] = {0} , t_map[26] = {0};
        for(int i = 0 ; i < s.size() ; i++){
            s_map[s[i]-'a']++;//converting char into index no.
        }
        for(int j = 0 ; j < t.size() ; j++){
            t_map[t[j]-'a']++;
        }
        int k = 0;
        while(k < 26){
            if(s_map[k] != t_map[k]) return false;
            k++;
        }
        return true;
    }
};
