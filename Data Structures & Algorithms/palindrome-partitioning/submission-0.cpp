class Solution {
public:
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        if(s.empty())   return res;
        
        vector<string> path;
        
        dfs(0,s,res,path);
        return res;
        
    }
    
    void dfs(int idx, string s,vector<vector<string>> &res,vector<string> &path )
    {
        if(idx == s.size())
        {
            res.push_back(path);
            return;
        }
        
        for(int i = idx; i<s.size(); i++)
        {
            if(isPal(s, idx, i))
            {
                path.push_back(s.substr(idx, i-idx+1));
                dfs(i+1,s,res,path);
                path.pop_back();
            }
        }
        
        return;
    }
    
    bool isPal(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--])
                return false;
        }
        
        return true;
    }
};