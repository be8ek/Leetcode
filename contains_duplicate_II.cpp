class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> occured; 
        for (int i=0; i<nums.size(); i++) {
            if (occured.find(nums[i]) != occured.end() && abs(i - occured.at(nums[i])) <= k) {
                return true; 
            } else if (occured.find(nums[i]) == occured.end()) {
                occured[nums[i]] = i; 
            } else {
                occured.at(nums[i]) = i; 
            }
        }
        return false; 
    }
};