class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> inv = {{')','('}, {']','['}, {'}','{'}};
        stack<char> stk;

        for(int i=0; i<s.size();i++)
        {
            if(inv.count(s[i]))
            {
                if(!stk.empty() && stk.top() == inv[s[i]])
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
