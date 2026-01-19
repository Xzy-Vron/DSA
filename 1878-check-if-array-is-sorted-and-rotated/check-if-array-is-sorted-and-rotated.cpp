class Solution {
public:
    bool check(vector<int>& nums) {
        int check = 0;
        int n = nums.size();
        for (int i=0; i<n-1; i++) {
            if (nums[i] > nums[i+1]) {
                check++;
            }
        }
        if(nums[n-1] > nums[0]) check++;
        return check <=1;
    }
};