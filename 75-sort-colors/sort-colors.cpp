class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Brute force
        int n = nums.size();
        int i=0, mid=0, end=n-1;

        while (mid <= end) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[i]);
                mid++;
                i++;
            }
            else if(nums[mid] == 2) {
                swap(nums[mid], nums[end]);
                end--;
            } else {
                mid++;
            }
            
        }

    }
};