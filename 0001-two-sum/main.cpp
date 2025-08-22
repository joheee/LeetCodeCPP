class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            // hash map
            unordered_map<int,int> dic;
            // looping through all nums
            for(int i = 0; i < nums.size(); i++) {
                // calculate the remainder
                int remainder = target - nums[i];
                // if remainder exist
                if(dic.count(remainder)) {
                    // return the indexes
                    return {dic[remainder], i};
                }
                // save into dic
                dic[nums[i]] = i;
            }
            return {};
        }
    };