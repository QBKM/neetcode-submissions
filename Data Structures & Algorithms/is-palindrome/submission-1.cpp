class Solution {
public:
    bool isPalindrome(string s) {
        string k;

        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                k.push_back(tolower(s[i]));
            }
        }

        return k == string(k.rbegin(), k.rend());
    }
};
