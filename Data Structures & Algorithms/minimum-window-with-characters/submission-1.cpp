class Solution {
public:
    string minWindow(string s, string t) { 
        unordered_map<char,int> mp;
        int n = s.size(), m = t.size(),i = 0, j = 0,count;
        string res = "";
        int ans = INT_MAX;
        for(char i:t)
            mp[i]++;
        
        count = mp.size();
        // org = mp;
        while(j<n)
        {
            if(mp.find(s[j])!= mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]] == 0)
                    count--;
            }   
            
            if(count>0)
                j++;
            
            else if(count == 0)
            {
                
                while(count==0)
                {
                    // cout<<s.substr(i,j-i+1)<<endl;
                    if(j-i+1< ans)
                    {
                        res = s.substr(i,j-i+1);
                        ans = res.size();
                    }
                    if(mp.find(s[i]) == mp.end())
                    {
                        i++;
                         
                    }   
                    else 
                    {
                        if(mp[s[i]]<0)
                        {
                            mp[s[i]]++;
                        }
                        else{
                            mp[s[i]]++;
                            count++;
                        }
                        i++;
                    }
                }
                
                
                j++;
                
            }
            
        }
       return res;     
    }
};