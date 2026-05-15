class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        int i = 0, j = 0, n = nums1.size(), m = nums2.size();
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                res.push_back(nums1[i++]);
            } else {
                res.push_back(nums2[j++]);
            }
        }

        while (i<n) {
            res.push_back(nums1[i++]);
        }

        while (j<m) {
            res.push_back(nums2[j++]);
        }

        int r = res.size();

        // for (int i = 0; i<r; i++) {
        //     cout << res[i] << " ";
        // }

        if (r%2 == 0) {
            return (double)(res[r/2] + res[r/2 - 1])/2;
        }

        return res[r/2];
    }
};
