// Longest Subarray with given Sum K(Positives)

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int left,right=0;
        long long sum=0;
        int maxLen=0;
        while(right<n){
            sum=sum+nums[right];
            while(left<=right && sum>k){
                sum=sum-nums[left];
                left++;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            right++;
        }
        return maxLen;

    }
};

