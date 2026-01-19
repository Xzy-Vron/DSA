class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left =0;
        for (auto &el: nums) {
            if (el % 2 == 0) {
                swap(el, nums[left]);
                left++;
            }
        }
        return nums;
    }
};