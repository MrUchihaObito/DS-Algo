//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends



class Solution
{
    public:
    //Function to return maximum sum subarray by removing at most one element.
    int maxSumSubarray(int A[], int n)
    {
        //Your code here
        int curr_max=A[0];
        int maxx=A[0];
        vector<int>fwd(n,0);
        fwd[0]=A[0];
        for(int i=1;i<n;i++)
        {
            curr_max=max(curr_max+A[i],A[i]);
            maxx=max(maxx,curr_max);
            fwd[i]=curr_max;
        }
        vector<int>bwd(n,0);
        curr_max=maxx=bwd[n-1]=A[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            curr_max=max(curr_max+A[i],A[i]);
            maxx=max(maxx,curr_max);
            bwd[i]=curr_max;
        }
        int ans=maxx;
        
        
        
        for(int i=1;i<n-1;i++)
        {
            ans=max(ans,max(0,fwd[i-1])+max(0,bwd[i+1]));
        }
        int max_element=A[0];
        if(ans==0){
            for(int i=0;i<n;i++)
            {
                max_element=max(max_element,A[i]);
            }
            return max_element;
        }
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	
	//taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking total elements
		int n;
		cin>>n;
		int a[n];
		
		//inserting elements in the array
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		//calling method maxSumSubarray()
		Solution obj;
		cout<<obj.maxSumSubarray(a,n)<<endl;
	}
}


// } Driver Code Ends