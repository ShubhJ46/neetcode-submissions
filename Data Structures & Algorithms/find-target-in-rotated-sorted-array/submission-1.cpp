class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1, c;

        while (i<=j) {
            c = (i+j)/2;
            if (target == nums[c]) {
                return c;
            }
            if (nums[i] <= nums[c]) {
                
                if (nums[i] <= target && target <= nums[c]) {
                    j = c-1;
                } else {
                    i = c+1;
                }
            } else {
                if (nums[c] <= target && target <= nums[j]) {
                    i = c+1;
                } else {
                    j = c-1;
                }
            }
        }
        
        return -1;
    }
};
