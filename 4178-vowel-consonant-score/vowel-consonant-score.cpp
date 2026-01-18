class Solution {
public:
    int vowelConsonantScore(string s) {
        float v = 0, c=0;  
        int score =0;
        for (auto &l: s) {
            if (l == ' ' || isdigit(l)) {
                continue;
            }
            
            if (l == 'a'||l == 'e'||l == 'i'||l == 'o'||l == 'u') {
                v++;
            } else {
                c++;
            }
        }

        if (c > 0) {
           score = floor(v/c);
        }
        return score;
    }
};