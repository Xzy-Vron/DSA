class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        unordered_set<int> s;
        vector<int> res;
        
        for (auto &el: nums) {
            m[el]++;
            if(m[el]> n/3){
                s.insert(el); 
            }

        }
        for (auto &el: s) res.push_back(el);

        return res;
    }
};