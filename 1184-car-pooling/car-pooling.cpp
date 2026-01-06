class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> enter(1002, 0);
        vector<int> exit(1002, 0);

        for (auto &trip: trips) {
            enter[trip[1]] += trip[0];
            exit[trip[2]] += trip[0];
        }

        for (int i=0; i<enter.size(); i++) {
            capacity += exit[i];
            capacity -= enter[i];
            if (capacity < 0) return false;
        }
        return true;
    }
};