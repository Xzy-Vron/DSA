class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j <nums.size()-1-i; j++) {
                if (nums[j] % 2 != 0) {
                    swap(nums[j], nums[j+1]);
                }
            }
        }
        return nums;
    
    }
};