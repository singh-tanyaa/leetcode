class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
             if (intervals.empty()) {
            return 0;
        }

        // Sort the intervals based on their ending time
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int count = 0;
        int prevEndTime = intervals[0][1];

        for (size_t i = 1; i < intervals.size(); i++) {
            // Check for overlapping intervals
            if (intervals[i][0] < prevEndTime) {
                // Remove the interval with larger ending time
                count++;
                prevEndTime = min(prevEndTime, intervals[i][1]);
            } else {
                prevEndTime = intervals[i][1];
            }
        }

        return count;
    
    }
};