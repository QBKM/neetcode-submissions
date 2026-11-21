class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> num_set;

        for(int i=0; i<nums.size();i++)
            num_set.insert(nums[i]);

        for(int i=0; i<nums.size();i++)
        {
            if(num_set.find(i) == num_set.end())
            {
                return i;
            }
        }

        return nums.size();

        // for(int i=0; i<nums.size()+1; i++)
        // {
        //     for(int j=0; j<nums.size(); j++)
        //     {
        //         if(nums[j] == index)
        //         {
        //             index++;
        //             break;
        //         }
        //     }
            
        //     if(index == i)
        //         return index;
        // }

        // return 0;
    }
};
