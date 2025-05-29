// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count++;
            else count=0;
            maxc=max(maxc, count);
        }
        return maxc;
    }
};