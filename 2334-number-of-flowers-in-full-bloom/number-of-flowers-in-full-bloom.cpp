class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> start;
        vector<int> die;
        vector<int> result;
        
        for (auto &F : flowers) {
            start.push_back(F[0]);
            die.push_back(F[1]);
        }
        sort(start.begin(), start.end());
        sort(die.begin(), die.end());
        
        for (auto &person: people) {
            auto it_start= upper_bound(start.begin(), start.end(), person);
            auto startFlowers = distance(start.begin(), it_start);

            auto it_die = lower_bound(die.begin(), die.end(), person);
            auto dieFlowers = distance(die.begin(), it_die);

            result.push_back(startFlowers - dieFlowers);
        }
        return result;
    }
};