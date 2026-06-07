class Solution {
public:

    bool isPermutation(vector<int>& v) {
        for (int i = 0; i<v.size(); i++) {
            if(v[i]!=0) return false;
        }

        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> v(26, 0);
        for (char c: s1) {
            v[c-'a']++;
        }

        int i = 0, j = 0, m = s1.size();

        while (j < s2.size()) {
            v[s2[j]-'a']--;

            if (j-i+1 < m) {
                j++;
            } else {
                if (isPermutation(v)) return true;

                v[s2[i]-'a']++;
                i++;
                j++;
            }
        }


        return false;

    }
};
