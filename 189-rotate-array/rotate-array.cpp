class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size(), 0);
        int n = nums.size();
        k = k % n;

        for (int i =0; i<n; i++) {
            ans[(i+k) % n] = nums[i];
        }

        int j=0;
        while (j < n) {
            nums[j] = ans[j];
            j++;
        }
    }
};