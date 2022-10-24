//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    for(int k=0;k<n;k++)
	    {
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<n;j++)
	            {
	                int a=matrix[i][k];
	                if(a==-1)a=INT_MAX;
	                
	                int b=matrix[k][j];
	                if(b==-1)b=INT_MAX;
	                
	                int c=matrix[i][j];
	                if(c==-1)c=INT_MAX;
	                
	                
	                if(a!=INT_MAX && b!=INT_MAX)
	                {
	                    c=min(c,a+b);
	                }
	                if(c==INT_MAX)
	                c=-1;
	                
	                matrix[i][j]=c;
	                
	                
	            }
	        }
	    }
	    
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends