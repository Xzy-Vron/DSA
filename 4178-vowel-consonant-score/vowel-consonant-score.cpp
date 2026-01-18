class Solution {
public:
    int vowelConsonantScore(string s) {
        float v = 0, c = 0;
        for (auto& l : s) {

            if (l >= 'a' && l <= 'z') {
                if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
                    v++;
                } else {
                    c++;
                }
            }
        }
        if (c == 0) return 0;
        return floor(v/c);
    }
};