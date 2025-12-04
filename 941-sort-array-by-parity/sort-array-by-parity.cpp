class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left =0;
        for (int &num: nums) {
            if (num % 2 ==0) {
                swap(num, nums[left]);
                left++;
            }
        }
        return nums;
    }
};