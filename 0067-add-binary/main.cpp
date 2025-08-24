class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;

        // pointer iterating from the last to first
        int lenA = a.length() - 1;
        int lenB = b.length() - 1;

        // the loop continues as long there are any digits left on string a or b
        // or a carry = 1
        while(lenA >= 0 || lenB >= 0 || carry > 0) {
            // temporary variable
            int sum = carry;
            // add the value if string is a is available
            if(lenA >= 0) {
                // convert the char into int (0 or 1)
                sum += a[lenA] - '0';
                // move string a to the left
                lenA--;
            }
            // add the value if string is b is available
            if(lenB >= 0) {
                // convert the char into int (0 or 1)
                sum += b[lenB] - '0';
                // move string b to the left
                lenB--;
            }
            // the final sum has value 0,1,2,3
            // The binary result (sum % 2) is prepended to the result string
            res = to_string(sum % 2) + res;
            // The carry for the next position is the sum divided by 2 to keep the carry 0 or 1
            carry = sum / 2;
        }
        
        return res;      
    }
};