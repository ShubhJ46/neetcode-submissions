class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int res = 0;
        vector<int> left(n, 0), right (n, 0);
        left[0] = h[0];
        right[n-1] = h[n-1];
        for(int i = 1; i<n; i++) {
            left[i] = max(left[i-1], h[i]);
            right[n-i-1] = max(right[n-i], h[n-i-1]);
        }

        for (int i = 0; i<n; i++) {
            res += min(left[i], right[i]) - h[i];
            // cout << "left: " << left[i] << " right: " << right[i] << " res: " << res << endl;
        }

        return res;

    }
};
