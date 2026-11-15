class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>reg;

        for(int& n : nums)
        {
            if(reg.count(n))
                return true;
            
            reg.insert(n);
        }
        
        return false;
    }
};