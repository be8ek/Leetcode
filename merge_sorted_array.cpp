class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums = nums1;
        int i = 0, j = 0; 
        for (int k=0; k<n+m; k++) {
            if (i < m && j < n) {
                if (nums[i] > nums2[j]) {
                    nums1[k] = nums2[j]; 
                    j++; 
                } else {
                    nums1[k] = nums[i]; 
                    i++; 
                }
            } else if (i < m) {
                nums1[k] = nums[i]; 
                i++; 
            } else {
                nums1[k] = nums2[j]; 
                j++; 
            }
        }
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        for (int k=n+m-1; k>=0; k--) {
            if (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    nums1[k] = nums1[i];
                    i--; 
                } else {
                    nums1[k] = nums2[j]; 
                    j--; 
                }
            } else if (i >= 0) {
                nums1[k] = nums1[i]; 
                i--; 
            } else {
                nums1[k] = nums2[j]; 
                j--; 
            }
        }
    }
};