// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        // binary search logic that ended the search if left == right
        while(left < right){
            int mid = left + (right - left) / 2;
            // if the function isBadVersion return true we move the right into the mid
            if(isBadVersion(mid)) right = mid;
            // mode the left after the mid
            else left = mid + 1;
        }
        return right;
    }
};