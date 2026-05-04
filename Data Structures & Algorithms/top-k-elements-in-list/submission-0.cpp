class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i: nums) {
            mp[i]++;
        }

        auto comp = [](pair<int,int> a, pair<int,int> b)
        { return a.second < b.second; };

        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comp)> pq;

        for(auto it: mp) {
            pq.push(it);
        }

        vector<int> res;
        for (int i = 0; i<k; i++) {
            res.push_back(pq.top().first);
            pq.pop();
        }

        return res;  
    }
};
