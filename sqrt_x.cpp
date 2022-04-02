class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0; 
        }
        if (x <= 3) {
            return 1; 
        }
        int start = 0, end = x / 2, middle, ans; 
        while (start <= end) {
            middle = start + (end-start)/2; 
            if (middle <= x / middle) {
                ans = middle, start = middle + 1;  
            } else {
                end = middle - 1; 
            }
        }
        return ans; 
    }
}; 