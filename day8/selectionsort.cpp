#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int min_ind=i;
            for(int j=i;j<n;j++){
                if(nums[j]<nums[min_ind]){
                    min_ind=j;
                }
                
            }
            int temp=nums[min_ind];
            nums[min_ind]=nums[i];
            nums[i]=temp;
        }
        return nums;

    }
};
