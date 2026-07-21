class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for (char temp:s){
            mp[temp]++;
        }
        for(char temp:t){
            mp[temp]--;
            if(mp[temp]<0) return false;
        }
        return true;
    }
};
