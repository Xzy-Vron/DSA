// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        
        for (int i=0; i< min(N, M); i++) {
            int rowSum=0;
            int colSum=0;
            for (int j=0; j< M; j++) {
                rowSum += A[i][j];
            }
            for (int j=0; j< N; j++) {
                colSum += A[j][i];
            }
            if (colSum != rowSum) {
                return 0;
            }
        }
        return 1;
    }
};