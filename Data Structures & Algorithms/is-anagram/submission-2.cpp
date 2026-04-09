class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        vector<int> string1(26, 0);
        for(int i = 0; i < s.size(); i++){
            string1[s[i] - 'a']++;
            string1[t[i] - 'a']--;
        }
        for(int i = 0; i < string1.size(); i++){
            if (string1[i] != 0){
                return false;
            }
        }
        return true;
    }
};
