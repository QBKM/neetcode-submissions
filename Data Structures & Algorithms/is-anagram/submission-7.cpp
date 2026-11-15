class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,char> s_set;
        std::unordered_map<char,char> t_set;

        if(s.size() != t.size())
            return false;

        for(int n=0; n<s.size();n++)
        {
            s_set[s[n]]++;
            t_set[t[n]]++;
        }

        return s_set == t_set;
    }
};