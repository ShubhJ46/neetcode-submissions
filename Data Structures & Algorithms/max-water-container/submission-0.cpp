class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int left = 0, right  = n-1;
        int ans = 0;
        while (left < right) {
            ans = max(ans, (right - left)*min(h[left], h[right]));
            if (h[left] < h[right]) {
                left++;
            } else {
                right--;
            }
        }

        return ans;
    }
};
