#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        return nums;

    }
};
