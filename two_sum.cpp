class Solution {
public:
    bool isSubtracable(int a, int b) {
        return (b >= 0 && a >= INT_MIN + b) || (b < 0 && a <= INT_MAX + b); 
    }
    
    vector<int> twoSum(const vector<int>& a, int target) {
        unordered_map<int, int> valueToIndex; 
        for (int i=0; i<(int)a.size(); i++) {
            if (isSubtracable(target, a[i])) {
                auto it = valueToIndex.find(target - a[i]); 
                if (it != valueToIndex.end()) {
                    return {it->second, i}; 
                }
            }
            valueToIndex[a[i]] = i; 
        }
        throw invalid_argument("sum not found"); 
    }
};