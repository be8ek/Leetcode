class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> occured; 
        for (const int& x : nums) {
            if (occured.find(x) != occured.end()) {
                return true; 
            } else {
                occured.insert(x); 
            }
        }
        return false; 
    }
};