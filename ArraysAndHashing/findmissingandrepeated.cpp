

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int x;
        int y;

        unordered_map<int, int> fq;
        for (auto& row : grid) {
            for (int num : row) {
                fq[num]++;
            }
        }

        for (int num = 1; num <= grid.size() * grid.size(); num++) {
            if (!fq.count(num)) {
                x = num;  
            } else if (fq[num] == 2) {
                y = num; 
            }
        }

        return {y , x};
    }
};
