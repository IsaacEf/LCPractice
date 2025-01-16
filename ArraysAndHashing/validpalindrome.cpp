class Solution {
public:
    bool isPalindrome(string s) {
        string s_;
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i]) != 0){
                s_ += tolower(s[i]);
            }
        }
        string final = s_; 
        reverse(s_.begin(),s_.end());
        if( final == s_){
            return true;
        }
    return false;
    }
};
