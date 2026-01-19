class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        vector<int> prefixSum(nums.size());
        unordered_map<int,int> m;

        prefixSum[0] = nums[0];
        int n = nums.size();
        for (int i = 1; i<n; i++) {
            prefixSum[i] = nums[i] + prefixSum[i-1];
        } 

        for (int i = 0; i<n; i++) {
            if (prefixSum[i] == k) {
                count++;
            } 
            int value = prefixSum[i] - k;
            if (m.count(value)) {
                count += m[value];
            }
            m[prefixSum[i]]++;
        } 
        return count;
    }
};