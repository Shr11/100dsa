// Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
// palindrome
//  that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.



class Solution {
public:
    int longestPalindrome(string s) {
        
        // Initializing max length of substring palindrome as default
        int length = 0;

        // set to place all singly appearing elements of the string
        unordered_set<char> singles;


        // iterating through each element of the string 
        for (int i = 0; i < s.length(); i++)
        {
            // if the set does not contain an element , 
            if (!singles.contains(s[i]))
            {
                // then push it .
                singles.emplace(s[i]);
            }

            // if duplicate(twice) found , 
            else
            {
                // then erase it 
                singles.erase(s[i]);
                length+=2;
            }
        // for loop ends
        }

        // if set contains non-duplicate items, increase the length of max length(for placing one such)
        // element in between the answer Palindrome ( & increase lenght by 1)
        if (!singles.empty())
            length+=1;

        
        // return the max lenght
        return length;
    }
};
