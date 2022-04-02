class Solution {
public:
    int climbStairs(int n) {
        vector<int> stair(n+1, 1);
        for (int i=2; i<=n; i++) {
            stair[i] = stair[i-1] + stair[i-2]; 
        }
        return stair[n]; 
    }
};

class Solution {
public:
    int climbStairs(int n) {
        int one_step = 0, two_step = 1, res;  
        for (int i=1; i<=n; i++) {
            res = one_step + two_step;
            one_step = two_step; 
            two_step = res; 
        }
        return res; 
    }
};