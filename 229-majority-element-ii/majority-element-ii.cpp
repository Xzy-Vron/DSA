class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> result;
        
        for (auto &el: nums) {
            m[el]++;
        }

        for (auto &el: m) {
            if (el.second > n/3) {
                result.push_back(el.first);
            }
        }
        return result;
    }
};