class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int counter = max(word1.length(), word2.length());
        
        for(int i = 0; i < counter; i++){
            if(i < word1.size()){
                res += word1[i];
            }
            if(i < word2.size()){
                res += word2[i];  
            }
        }
        return res;
    }
};
