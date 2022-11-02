class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        
       /* int sum=0;
        int len=INT_MAX;
        int start=0;
        int end=0;
        int n=nums.size();
        while(end<n)
        {
            sum+=nums[end];
            end++;
            if(sum>=target)
            {
                
                len=min(len,end-start);
                sum=sum-nums[start];
                start++;
            }
        }
        if(len==INT_MAX)return 0;
        return len;
        */
        int sum=0;
        int i=0;
        int j=0;
        int n=arr.size();
        int len=INT_MAX;
        while(j<n)
        {
            sum=sum+arr[j];
            j++;
            while(sum>=target)
            {
                len=min(len,j-i);
                sum=sum-arr[i];
                i++;
            }
            
                
                
            
        }
        if(len==INT_MAX)return 0;
        return len;
    }
};