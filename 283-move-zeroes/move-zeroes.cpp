class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i =0;
        for (int &num: nums) {
            if (num != 0) {
                ans[i] = num;
                i++;
            }
        }

        for (int i=0; i<nums.size(); ++i) {
            nums[i] = ans[i];
            
        } 
    }
};