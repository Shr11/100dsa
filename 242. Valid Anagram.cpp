class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> nullified;

        for (auto i : s)
        {
            nullified[i]++;
        }

        for (auto i : t)
        {
            nullified[i]--;
        }

        for (auto count : nullified)
        {
            if (count.second != 0)
                return false;
        }

        return true;

        // // by sorting
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return t == s;
    }   
};
