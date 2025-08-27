class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // storing uset with format {nums[i]:i}
        unordered_set<int> uset;
        // iterate with o(n) time complexity
        for(int i = 0; i < nums.size(); i++) {
            // if the current element already exist inside uset
            if(uset.count(nums[i])) return true;
            uset.insert(nums[i]);
        }
        return false;   
    }
};