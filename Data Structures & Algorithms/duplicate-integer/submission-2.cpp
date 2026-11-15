class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> once;

        for( int n=0; n<nums.size(); n++)
        {
            if(once.count(nums[n]))
            {
                return true;
            }
            once[nums[n]]++;
        }
        return false;
    }
};