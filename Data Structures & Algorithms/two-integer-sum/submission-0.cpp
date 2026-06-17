class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;

        for(int i = 0; i<nums.size(); i++)
        {
            int otherNum = target - nums[i];
            if(index.find(otherNum) != index.end())
            {
                if(index[otherNum] < i) return {index[otherNum], i};
                return {i,index[otherNum]};
            }
            index[nums[i]] = i;
            
        }

        return {};
    }
};
