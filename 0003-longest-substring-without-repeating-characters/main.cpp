class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // Stores the last seen index of each character.
        std::unordered_map<char, int> char_index_map;

        int maxLength = 0;
        int leftWin = 0; // Left pointer for the sliding window.

        // 'rightWin' expands the window from left to right.
        for (int rightWin = 0; rightWin < s.length(); ++rightWin) {
            char currentChar = s[rightWin];

            // If the character is a duplicate within the current window...
            if (char_index_map.count(currentChar)) {
                // ...move the left pointer forward.
                // std::max prevents the left pointer from moving backward
                // on duplicates found outside the current window (e.g., "abba").
                leftWin = std::max(leftWin, char_index_map[currentChar] + 1);
            }

            // Update the last seen index of the current character.
            char_index_map[currentChar] = rightWin;

            // Update maxLength if the current window is the longest yet.
            maxLength = std::max(maxLength, rightWin - leftWin + 1);
        }

        return maxLength;
    }
};