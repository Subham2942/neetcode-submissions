class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0, j = 1;
        while(i < nums.size() - 1 && j < nums.size())
        {
            if(nums[i++] == nums[j++]) return true;
        }
        return false;
    }
};