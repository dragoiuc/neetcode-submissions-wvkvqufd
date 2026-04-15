class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groupedStrings;
        unordered_map<string,int> anagramMap;
        int nextVectorIndex = 0;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            auto it = anagramMap.find(temp);
            if (it != anagramMap.end()){
                groupedStrings[it->second].push_back(strs[i]);
            }
            else{
                anagramMap.insert({temp, nextVectorIndex});
                groupedStrings.push_back({strs[i]});
                nextVectorIndex++;
            }
        }
        return groupedStrings;
    }
};
