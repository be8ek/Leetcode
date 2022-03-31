class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> nums; 
        if (x < 0) {
            return false; 
        }
        while (x > 0) {
            nums.push_back(x%10); 
            x /= 10; 
        }
        for (int i=0, j=(int)nums.size()-1; i<(int)nums.size()/2; i++, j--) {
            if (nums[i] != nums[j]) {
                return false; 
            }
        }
        return true; 
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; 
        }
        int res = 0, n = x; 
        while (x > 0) {
            if (res < INT_MAX / 10 || (res == INT_MAX / 10 && x%10 <= INT_MAX % 10)) {
                res = res * 10 + (x % 10); 
                x /= 10; 
            } else {
                return false;  
            }
            
        }
        return n == res; 
    }
};