class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // This map stores the most recent index of each character we have seen.
        std::unordered_map<char, int> char_index_map;

        int maxLength = 0;
        int leftWin = 0; // This is the starting index of our current window.

        // The 'rightWin' pointer expands the window by moving from left to right.
        for (int rightWin = 0; rightWin < s.length(); ++rightWin) {
            char currentChar = s[rightWin];

            // Check if the current character is already in our map.
            // This means we might have found a duplicate.
            if (char_index_map.count(currentChar)) {
                // If a duplicate is found, we must move our left window pointer forward.
                // However, we only care about duplicates that are INSIDE our current window.
                // For example, in "abba", when we see the second 'a', the first 'a' is
                // at index 0, but our window has already moved to start at index 2 ("b").
                // We should not move our left pointer backward.
                //
                // std::max ensures our left pointer ONLY moves forward.
                // It takes the larger value between its current position and the position
                // right after the last time we saw this character.
                leftWin = std::max(leftWin, char_index_map[currentChar] + 1);
            }

            // Update the map with the current character's latest position.
            // If the character was already in the map, its old index is overwritten.
            char_index_map[currentChar] = rightWin;

            // Calculate the length of the current window.
            int currentLength = rightWin - leftWin + 1;

            // Update our maxLength if the current window is the longest we've seen so far.
            maxLength = std::max(maxLength, currentLength);
        }

        return maxLength;
    }
};