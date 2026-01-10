class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> m;

        for (int i=0; i<mat.size(); i++) {
            for (int j=0; j<mat[0].size(); j++) {
                m[i-j].push_back(mat[i][j]);
            }
        }

        for (auto &el: m) {
            sort(el.second.begin(), el.second.end());
        }

        for (int i=mat.size()-1; i>=0; i--) {
            for (int j=mat[0].size()-1; j>=0; j--) {
                mat[i][j] = (*(m[i-j].end()-1));  // can also use back() method;
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};

// Time Complexity - O(m*n)
// Space Complexity - O(l)