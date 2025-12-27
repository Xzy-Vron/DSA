class Solution {
public:
    void sortColors(vector<int>& nums) {
        int right =nums.size() -1;
        int left = 0;
        vector<int> ans(nums.size(), 1);

        for (int i =0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                ans[left] = nums[i];
                left++;
            }
            else if (nums[i] == 2) {
                ans[right] = nums[i];
                right--;
            }
        }

        for (int i =0; i<nums.size(); i++) {
            nums[i]= ans[i];
        }
    }
};