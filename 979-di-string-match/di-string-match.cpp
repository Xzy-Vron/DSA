class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left=0, right = s.size();
        vector<int> result;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == 'I') {
                result.push_back(left);
                left++;
            }
            else if (s[i] == 'D') {
                result.push_back(right);
                right--;
            }
        }
        result.push_back(right);
        return result;
    }
};