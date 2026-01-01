class NumArray {
public:

    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        int currentSum = nums[0];
        prefixSum.push_back(currentSum);
        for (int i=1; i<nums.size(); i++) {
            currentSum += nums[i];
            prefixSum.push_back(currentSum);
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) {
            return prefixSum[right];
        } else {
            return prefixSum[right] - prefixSum[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */