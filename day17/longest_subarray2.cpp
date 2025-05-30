// for array containing positive+negative+0 numbers

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        map<long long,int>preSum;
        long long sum=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            int rem=sum-k;
            if(preSum.find(rem)!=preSum.end()){
                int len=i-preSum[rem];
                maxLen=max(maxLen,len);
            }
            if(preSum.find(sum)==preSum.end()){
                preSum[sum]=i;
            }
        }
        return maxLen;

    }
};
