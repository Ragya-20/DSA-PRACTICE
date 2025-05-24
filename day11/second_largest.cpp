#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if (nums.size() < 2) return -1;
        
        int large=INT_MIN;
        int second_largest=INT_MIN;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>large) {
                second_largest=large;
                large=nums[i];
            }
            else if(nums[i]>second_largest && nums[i]!=large){
                second_largest=nums[i];
            }

        }
        if (second_largest == INT_MIN ) return -1;
        return second_largest;
      
    }
};