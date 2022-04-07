class Solution {
public:
    int majorityElement(const vector<int>& nums) {
        unordered_map<int, int> m; 
        int maxElement = nums[0], maxOccurence = 1; 
        for (const auto& x : nums) {
            if (m.find(x) != m.end()) {
                m[x]++; 
                if (m[x] > maxOccurence) {
                    maxElement = x; 
                    maxOccurence = m[x]; 
                }
            } else {
                m.insert({x, 1});
            }
        }
        
        return maxElement; 
    }
};

class Solution {
public:
    int majorityElement(const vector<int>& nums) {
        int candidate = nums[0], count = 0; 
        for (const auto& x : nums) {
            if (x == candidate) {
                count++; 
            } else {
                if (count == 0) {
                    candidate = x; 
                    count++; 
                } else {
                    count--; 
                }
            }
        }
        return candidate; 
    }
};