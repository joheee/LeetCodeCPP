class Solution {
public:
    int longestPalindrome(string s) {
        int length = 0;
        unordered_set<char> uset;
        for(int i = 0; i < s.length(); i++) {
            // if the char exist inside the set 
            if(uset.count(s[i])) {
                // erase from the set
                uset.erase(s[i]);
                // length +2 because the pair
                length += 2;
            } else uset.insert(s[i]);
        }
        // if there still any single char left than it can be the center of palindrome
        if(!uset.empty()) length++;
        return length;
    }
};