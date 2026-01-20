class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count =0;
        int n = nums.size();
        vector<int> prefixSum(nums.size());

        if (nums[0] %2 == 0) {
            nums[0] = 0;
        } else {
            nums[0] = 1;
        }
        prefixSum[0] = nums[0];

        
        for (int i=1; i<n; i++) {
            if (nums[i] % 2 ==0) {
                nums[i] = 0;
            } else {
                nums[i] = 1;
            }
            prefixSum[i] = nums[i] + prefixSum[i-1];
        }

        unordered_map<int,int> m;

        for (int i =0; i<n; i++) {
            if (prefixSum[i] == k) count++;

            int val = prefixSum[i]- k;
            if(m.count(val)) {
                count += m[val];
            }
            m[prefixSum[i]]++;
        }
        return count;
    }
};