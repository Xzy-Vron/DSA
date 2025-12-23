class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valCount = 0;
        int j=nums.size()-1;

        for (int i=nums.size()-1; i>=0; i--) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;
                valCount++;
            }
        }
        int k = nums.size() - valCount;

        return k;
    }
};