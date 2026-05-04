class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, zeroes = 0;
        for (int i = 0; i< nums.size(); i++) {
            if (nums[i]) {
                product *= nums[i];
            } else {
                zeroes++;
            }

        }

        cout << "Product: " << product << " zeroes: " << zeroes << endl;

        vector<int> res;
        for(int i = 0; i<nums.size(); i++) {
            if (zeroes) {
                if (zeroes > 1 || nums[i]) {
                    res.push_back(0);
                } else {
                    res.push_back(product);
                }
            } else {
                res.push_back(product/nums[i]);
            }
        }

        return res;

    }
};
