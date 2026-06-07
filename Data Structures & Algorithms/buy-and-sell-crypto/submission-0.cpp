class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX, prof = 0;

        for (int i = 0; i<prices.size(); i++) {
            buy = min (buy, prices[i]);
            prof = max(prof, prices[i] - buy);
            // cout << buy << " " << prof << endl;
        }


        return prof;
    }
};
