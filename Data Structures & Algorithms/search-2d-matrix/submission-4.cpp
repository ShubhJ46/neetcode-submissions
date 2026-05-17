class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();

        int left = 0, right = m*n-1, mid = 0;

        while (left <= right) {
            mid = left + (right-left)/2;
            int row = mid/n, col = mid%n;
            if (matrix[row][col] == target) {
                return true;
            } else if (target < matrix[row][col]) {
                right = mid-1;
            } else {
                left = mid + 1;
            }
        }

        // left = 0, right = n-1;
        // int row = mid;
        // // cout << "row: " << row << endl;

        // while (left <= right) {
        //     mid = left + (right-left)/2;

        //     if (target == matrix[row][mid]) {
        //         return true;
        //     } else if (target < matrix[row][mid]) {
        //         right = mid - 1;
        //     } else {
        //         left = mid + 1;
        //     }
        // }

        return false;
    }
};
