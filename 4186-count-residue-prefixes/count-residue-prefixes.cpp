class Solution {
public:
    int residuePrefixes(string s) {
        int count =0;
        string prefix = "";

        for (int i=0; i<s.size(); i++) {
            prefix += s[i];
            unordered_set <char>distinct(prefix.begin(), prefix.end());
            if  (distinct.size() == (prefix.size()%3)) count++;
        }
        return count;
    }
};