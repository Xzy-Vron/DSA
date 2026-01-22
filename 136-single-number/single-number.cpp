class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result =0;
        for (auto &el: nums) {
            result ^= el;
        }
        return result;
    }
};