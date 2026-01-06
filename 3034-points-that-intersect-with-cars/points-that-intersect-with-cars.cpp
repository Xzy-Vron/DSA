class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
    // Optimised Approach
        vector<int> diff(102, 0);
        int count=0;

        for (auto &position: nums) {
            diff[position[0]] += 1;
            diff[position[1]+1] -= 1;
        }
        
        for (int i=1; i<diff.size(); i++) {
            diff[i] += diff[i-1];
            if (diff[i]>0) {
                count++;
            }
        }
        
        return count;
    }
};

// O(nums.size() * position.size()) -> O(n^2)