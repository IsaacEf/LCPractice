class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char,int> freq;
    
    int left = 0;
    int maxCount = 0;
    int result = 0;

    for (int right = 0; right < s.size(); right++) {
        //Update Frequency
        freq[s[right] - 'Z']++;
        maxCount = max(maxCount, freq[s[right] - 'Z']);
        while ((right - left + 1) - maxCount > k) {
            freq[s[left] - 'Z']--;
            left++;
        }
        result = max(result, right - left + 1);
    }

    return result;
}

};
