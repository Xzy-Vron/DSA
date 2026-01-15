class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (auto &el: nums) {
            m[el]++;
        }

        int key = INT_MIN;
        int valCount = 0;
        for (auto &pr: m) {
            if (valCount < pr.second) {
                key = pr.first;
                valCount = pr.second;
            }
        }

        return key;
    }
};