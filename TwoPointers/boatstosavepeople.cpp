class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int l = 0;
        int r = people.size() - 1;
        int counter = 0;

        while (l <= r){
            int sum = people[l] + people[r];
            if(sum <= limit){
                l++;
            }
            r--;
            counter++;
        }

        return counter;
    }
};
