class Solution {
public:
    bool isPalindrome(string s) {

        string r;

        for(char c : s)
        {
            if(isalnum(c))
                r +=tolower(c);
        }

        return r == string(r.rbegin(), r.rend());
    }
};
