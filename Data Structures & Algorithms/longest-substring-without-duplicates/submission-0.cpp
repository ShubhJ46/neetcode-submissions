class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;

        int i = 0, j = 0, res = 0;

        while (j < s.size()) {
            // cout << i << ", " << j << " seen: " << mp.count(s[j]);
            if (!mp.count(s[j])) {
                mp.insert(s[j++]);
                res = max(res, j-i);
            } else {
                mp.erase(s[i++]);
            }

            // cout << " res: " << res << endl;

        }

        return res;
    }
};
