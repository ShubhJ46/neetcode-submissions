class Solution {
public:
    int characterReplacement(string str, int k) {
   
    int longestSubstring = 0;

    int n = str.size();

    int i = 0, j;

    vector<int> cnt(26, 0);
    int mx = 0;

    for (j = 0; j < n; j++)
    {
        int ch = str[j] - 'A';
        cnt[ch]++;

        mx = max(mx, cnt[ch]);
        
        while ((j - i + 1 - mx) > k)
        {
            cnt[str[i] - 'A']--;
            i++;
        }
        
        longestSubstring = max(longestSubstring, j - i + 1);
    }

    return longestSubstring;
    }
};