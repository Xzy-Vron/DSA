class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> newarr;
        for (int el : nums) {
            if (el < pivot) newarr.push_back(el);
        }
        for (int el : nums) {
            if (el == pivot) newarr.push_back(el);
        }
        for (int el : nums) {
            if (el > pivot) newarr.push_back(el);
        }
        return newarr;
    }
};