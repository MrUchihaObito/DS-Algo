class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int erased_interval=0;
        int previous_end=intervals[0][1];
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>=previous_end)
            {
                previous_end=intervals[i][1];
                c++;
            }
            else if(previous_end>intervals[i][0])
            {
                erased_interval++;
                previous_end=min(previous_end,intervals[i][1]);
            }
        }
        
        return erased_interval;
    }
};