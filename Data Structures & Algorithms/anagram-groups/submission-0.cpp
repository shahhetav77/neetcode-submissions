class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> groups;
        for(string word:strs){
            string key = word;
            sort(key.begin(),key.end());
            groups[key].push_back(word);
        }
        for(auto& x:groups){
            result.push_back(x.second);
        }
        return result;
    }
};
