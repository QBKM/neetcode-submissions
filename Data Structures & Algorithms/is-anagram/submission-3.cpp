class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        unordered_map<char,int> char_s;
        unordered_map<char,int> char_t;

        for(int i=0; i<s.size();i++)
        {
            char_s[s[i]]++;
            char_t[t[i]]++;
        }

        return char_s == char_t;
    }
};
