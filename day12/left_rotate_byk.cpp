#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0 || k % n == 0) return;
        k = k % n; 
        vector<int> temp(nums.begin(), nums.begin() + k);
        for (int i = 0; i < n - k; i++) {
            nums[i] = nums[i + k];
        }
        for (int i = 0; i < k; i++) {
            nums[n - k + i] = temp[i];
        }

    }
};