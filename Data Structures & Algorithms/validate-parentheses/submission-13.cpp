class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> couple = {{')','('}, {']','['}, {'}','{'}};
        stack<char> stk;

        for(int i=0; i<s.size();i++)
        {
            if(couple.count(s[i]))
            {
                if(!stk.empty() && stk.top() == couple[s[i]])
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                stk.push(s[i]);
            }
        }

        return stk.empty();
    }
};
