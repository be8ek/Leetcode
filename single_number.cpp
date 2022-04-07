class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int i = 0, j = 1; 
        while (j < nums.size()) {
            if (nums[i] != nums[j]) {
                return nums[i]; 
            }
            j += 2; 
            i += 2; 
        }
        return nums[i]; 
    }
};

class Solution {
public:
    /*
    * xor 
    * 0 ^ 0 = 0
    * 1 ^ 0 = 1 
    * 0 ^ 1 = 1
    * 1 ^ 1 = 1
    * x ^ x = 0
    * x ^ 0 = x 
    * x ^ y = y ^ x
    * (x ^ y) ^ z = x ^ (y ^ z)
    */
    int singleNumber(const vector<int>& nums) {
        int ans = 0; 
        for (const int& i : nums) {
            ans ^= i; 
        }
        return ans;
    }
};