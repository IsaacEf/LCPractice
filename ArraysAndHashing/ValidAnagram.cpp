class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sf;
        map<char,int> tf;

        for(int i = 0; i < s.size(); i++){
            sf[s[i]]++;

        }
        for(int j = 0; j < t.size(); j++){
            tf[t[j]]++;
        }
        if(tf == sf){
            return true;
        }
        return false;
    }
};
