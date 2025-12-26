class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int sep = 0;

        for (int i=1; i < n; i++) {
            if (nums[i] < nums[i -1]) sep++;
        }

        if (nums[n-1] > nums[0]) sep++;

        return sep <=1;
    }
};