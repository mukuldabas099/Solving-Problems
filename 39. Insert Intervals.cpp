class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        vector<vector<int>> ans;
        bool insert = false;

        for(int i = 0; i < intervals.size(); i++) {

            // If current interval is before newInterval
            if(intervals[i][1] < newInterval[0]) {
                ans.push_back(intervals[i]);
            }

            // If current interval is after newInterval
            else if(intervals[i][0] > newInterval[1]) {

                if(insert == false) {
                    ans.push_back(newInterval);
                    insert = true;
                }

                ans.push_back(intervals[i]);
            }

            // If intervals overlap, merge them
            else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }

        // If newInterval is still not inserted
        if(insert == false) {
            ans.push_back(newInterval);
        }

        return ans;
    }
};
