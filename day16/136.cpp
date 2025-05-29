/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Using XOR property*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr^=nums[i];
        }
        return xorr;
    }
};