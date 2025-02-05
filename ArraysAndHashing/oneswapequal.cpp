class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> spots;
        if(s1 == s2){
            return true;
        }
        
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                spots.push_back(i);
            }
        }
        if(spots.size() != 2){
            return false;
        }
        int first = spots[0];
        int second = spots[1];

        return (s1[first] == s2[second] && s1[second] == s2[first]);
    }
};
