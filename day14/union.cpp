// Using set to find out Union of Two Sorted Arrays


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set < int > s;
        vector < int > Union;
        int n=nums1.size();
        int m=nums2.size();
        for (int i = 0; i < n; i++)
        s.insert(nums1[i]);
        for (int i = 0; i < m; i++)
        s.insert(nums2[i]);
        for (auto & it: s)
        Union.push_back(it);
        return Union;
}
};