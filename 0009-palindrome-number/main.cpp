class Solution {
public:
    bool isPalindrome(int x) {
        // if it is negative number return false
        if(x < 0) return false;

        // if x ends with 0 but not 0 itself
        if(x % 10 == 0 && x != 0) return false;

        // logic for the the half
        int revertedNum = 0;
        while(x > revertedNum) {
            // Revert the second half of the number to compare with the first half
            revertedNum = revertedNum * 10 + x % 10;
            // shrink the x
            x /= 10;
        }
        
        // left condition for even digit, right condition for odd digit
        return x == revertedNum || x == revertedNum / 10;
    }
};