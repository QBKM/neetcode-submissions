class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> once;

        for(int n : nums)
        {
            if(once.count(n))
            {
                return true;
            }
            once.insert(n);
        }
        return false;
    }
};