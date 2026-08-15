class Solution {
private:
    static bool comparator(pair<int, int>& a, pair<int, int>& b)
    {
        return a.second > b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        int n = nums.size();

        for(int i = 0; i<n; i++)
        {
            map[nums[i]]++;
        }

        vector<pair<int, int>> freq(map.begin(), map.end());

        sort(freq.begin(), freq.end(), comparator);
        vector<int> ans;
        for(int i = 0; i<k; i++)
        {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};