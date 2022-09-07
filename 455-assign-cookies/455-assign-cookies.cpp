class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        int count=0;
        unordered_map<int,int>m;
        
        
        for(int i=0;i<s.size();i++)
        {
            auto it=upper_bound(g.begin(),g.end(),s[i]);
            int index=it-g.begin();
            if(index>0)
            {    count++;
             g.erase(g.begin()+index-1);
            }
        }
      //  for(int i=0;i<g.size();i++)
     //   {
      //      cout<<g[i];
      //  }
        return count;
    }
};