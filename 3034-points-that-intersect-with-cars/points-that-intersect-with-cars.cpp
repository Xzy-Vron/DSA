class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int> s;
        
        for (auto &position: nums) {
            int start = position[0];
            int end = position[1];

            for (int i=start; i<=end; i++) {
                s.insert(i);
            }
        }

        return s.size();
    }
};