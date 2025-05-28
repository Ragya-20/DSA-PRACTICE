/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/

// solution using XOR property

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            xor2=xor2^nums[i];
            xor1=xor1^i;
        }
        xor1=xor1^n;
        return (xor1^xor2);
    }
};