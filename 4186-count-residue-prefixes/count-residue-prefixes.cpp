class Solution {
public:
    int residuePrefixes(string s) {
        int d=0, c=0;
        vector<bool> p(26,false);
        for(int i=0;i<s.length();++i){
            if(!p[s[i]-'a']){
                d++;
                p[s[i]-'a']=true;
            }
            if(d==(i+1)%3){
                c++;
            }
        }
        return c;
    }
};