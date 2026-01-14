class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anamap;
        vector<vector<string>> anagrams;

        for (int i=0; i<strs.size(); i++) {
            string temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            anamap[strs[i]].push_back(temp);
        }

        for (auto &ana: anamap) {
            anagrams.push_back(ana.second);
        }
        return anagrams;
    }
};