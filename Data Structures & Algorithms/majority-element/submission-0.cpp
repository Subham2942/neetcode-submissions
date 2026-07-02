class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement = nums[0];
        int maxCount = 0;

        for(int num : nums)
        {
            if(num == majorityElement) maxCount++;
            else{
                if(maxCount == 0){
                    majorityElement = num;
                    maxCount++;
                }else{
                    maxCount--;
                }
            }
        }

        return majorityElement;
    }
};