class Solution {
public:
    bool isSubsequence(string s, string t) {
        // by 2 pointer method
        int s_ptr = 0, t_ptr = 0;

        while (s_ptr < s.length() && t_ptr < t.length())
        {
            if(s[s_ptr]==t[t_ptr])
            {
                // go to next element in s
                s_ptr++;
            }

            // else move to next element in t
            t_ptr++;
        }

        // true if s_ptr reached the end of s
        return (s_ptr == s.length());
        
    }
};
