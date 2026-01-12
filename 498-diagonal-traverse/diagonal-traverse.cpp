class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>> elements;
        vector<int> result;
        
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                elements[i + j].push_back(mat[i][j]);
            }
        }

        for (auto& el : elements) {
            if (el.first % 2 == 0) {
                reverse(el.second.begin(), el.second.end());
            }
            for (auto &num: el.second) {
                result.push_back(num);
            }
        }
        return result;
    }
};