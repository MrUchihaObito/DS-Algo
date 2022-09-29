class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
return 0;
int ans=0;
int small_ans=0;

    for(int i=2;i<nums.size();i++)
    {
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            small_ans++;
        else
            small_ans=0;
        ans+=small_ans;
    }
    return ans;
    }
};