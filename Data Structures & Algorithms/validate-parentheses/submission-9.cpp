class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char>test = {
            {']', '['},
            {')', '('}, 
            {'}', '{'}};

        if(s.size() %2)
            return false;

        for(char c : s)
        {
            if(test.count(c) && !stack.empty())
            {
                if(stack.top() != test[c])
                    return false;
                    
                stack.pop();
            }
            else
            {
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
