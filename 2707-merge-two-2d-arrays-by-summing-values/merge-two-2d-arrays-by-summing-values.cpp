class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> m;

        for (auto &i: nums1) {
            m[i[0]] += i[1];
        }
        
        for (auto &n: nums2) {
            m[n[0]] += n[1];
        }

        vector<vector<int>> result;

        for (auto &pr : m) {
            result.push_back({pr.first, pr.second});
        }

        return result;
    }
};