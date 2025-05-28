//Taking two pointers i and j for union


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();

        while (i < n && j < m) {
            if (!result.empty() && nums1[i] == result.back()) {
                i++;
                continue;
            }
            if (!result.empty() && nums2[j] == result.back()) {
                j++;
                continue;
            }

            if (nums1[i] < nums2[j]) {
                result.push_back(nums1[i++]);
            } else if (nums1[i] > nums2[j]) {
                result.push_back(nums2[j++]);
            } else {
                result.push_back(nums1[i]);
                i++; j++;
            }
        }

        while (i < n) {
            if (result.empty() || nums1[i] != result.back())
                result.push_back(nums1[i]);
            i++;
        }

        while (j < m) {
            if (result.empty() || nums2[j] != result.back())
                result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};
