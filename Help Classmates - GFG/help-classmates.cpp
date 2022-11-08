//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int>s;
        vector<int>res;
        res.push_back(-1);
        s.push(arr[n-1]);
        
        for(int j=n-2;j>=0;j--)
        {
            while(s.empty()==false && s.top()>=arr[j])
            {
                s.pop();
            }
            if(s.empty()==true)res.push_back(-1);
            else res.push_back(s.top());
            
            s.push(arr[j]);
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends