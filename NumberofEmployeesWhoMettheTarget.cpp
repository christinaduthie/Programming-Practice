class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        if (hours.size() <= 50) {
            for (int i = 0; i < hours.size(); i++) {
                if (i >= target && i < 50) {
                    count = count + 1;
                } else {
                    continue;
                }
            }
        }
        return count;
    }
};