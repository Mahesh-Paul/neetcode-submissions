class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> mp;

    // Count frequency
    for (int num : nums) {
        mp[num]++;
    }

    // Store number + frequency
    vector<pair<int, int>> v;

    for (auto& pair : mp) {
        v.push_back({pair.first, pair.second});
    }

    // Sort by frequency
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a.second > b.second;
    });

    // Take top k
    vector<int> ans;

    for (int i = 0; i < k; i++) {
        ans.push_back(v[i].first);
    }

    return ans;
    }
};