class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // pichoner dik theke sort korle easier
        // O(n+m)
        // No extra Memory

        int i = m - 1, j = n -1 , k = n + m -1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[k--] = nums2[j--];
            } else {
                nums1[k--] = nums1[i--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        while (i >= 0) {
            nums1[k--] = nums1[i--];
        }
    }
}; 