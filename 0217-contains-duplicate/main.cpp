class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // storing umap with format {nums[i]:i}
        unordered_map<int,int> umap;
        // iterate with o(n) time complexity
        for(int i = 0; i < nums.size(); i++) {
            // if the curr already exist inside umap, it means duplicate has been found
            if(umap.count(nums[i])) return true;
            // save the curr into umap
            umap[nums[i]] = 0;
        }
        return false;   
    }
};