class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (auto &el: nums) {
            m[el]++;
        }

        for (auto &pr: m) {
            if (pr.second > n /2) {
                return pr.first;
            }
        }
        return 0;
    }
};