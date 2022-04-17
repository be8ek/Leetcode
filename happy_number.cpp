class Solution {
public:
    bool isHappy(int n) {
        int slow = n; 
        int fast = n; 
        while (true) {
            slow = getNextNumber(slow); 
            fast = getNextNumber(getNextNumber(fast)); 
            if (fast == 1) {
                return true; 
            }
            if (fast == slow) {
                return false; 
            }
        }
    }
    int getNextNumber(int n){
        int ans = 0; 
        while (n > 0) {
            ans += (n % 10) * (n % 10); 
            n /= 10; 
        }
        return ans; 
    }
};

class Solution {
public:
    bool isHappy(int n) {
        set<int> occured; 
        while (true) {
            if (n == 1) {
                break;
            }
            if (occured.find(n) != occured.end()) {
                return false; 
            }
            occured.insert(n); 
            n = getNextNumber(n); 
        }
        return true;
    }
    int getNextNumber(int n){
        int ans = 0; 
        while (n > 0) {
            ans += (n % 10) * (n % 10); 
            n /= 10; 
        }
        return ans; 
    }
};