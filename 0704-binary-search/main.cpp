class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            // calculate mid index
            int mid = (left + right) / 2;
            // found the result
            if(nums[mid] == target) return mid;
            // target on the right side
            else if(nums[mid] < target) left = mid + 1;
            // target on the left side
            else if(nums[mid] > target) right = mid - 1;
        }
        return -1;
    }
};