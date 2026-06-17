class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int num : nums)
        
        {
            if(m.find(num) != m.end()){
                return true;
            }
            m[num]++;
        }
        return false;
    }
};