class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        vector<int> string1(26, 0);
        vector<int> string2(26, 0);
        for(int i = 0; i < s.size(); i++){
            string1[s[i] - 'a']++;
            string2[t[i] - 'a']++;
        }
        return string1 == string2;
    }
};
