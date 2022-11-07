//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int>s;
        vector<long long int>res;
        res.push_back(-1);
        s.push(n-1);
        
        for(int i=n-2;i>=0;i--)
        {
            while(s.empty()==false && arr[s.top()]<=arr[i])
            {
                s.pop();
            }
            if(s.empty()==true)
            {
                res.push_back(-1);
            }
            else
            res.push_back(arr[s.top()]);
            s.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends