class Solution {
public:
    int lengthOfLastWord(string s) {
        // to measure the length of word
        int cnt = 0;

        // removing spaces from end of the string
        // s.erase(std::find_if(s.rbegin(), s.rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), s.end());
        // OR
        // s = std::regex_replace(s, std::regex(" +$"), "");


        // backword loop 
        for (int i = s.length() - 1; i >= 0; i--)
        {
            // if space not found , exit loop
            if (s[i] != ' ')
            {
                cnt++;
            }

            else if (cnt == 0)
                continue;

            else 
                break;

            

        }
        // final length
        return cnt;
    }
};
