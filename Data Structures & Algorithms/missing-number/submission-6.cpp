class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index = 0;

        for(int i=0; i<nums.size()+1; i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[j] == index)
                {
                    index++;
                    break;
                }
            }
            
            if(index == i)
                return index;
        }

        return 0;
    }
};
