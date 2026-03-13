class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums3;
        nums3.insert(nums3.end(),nums1.begin(),nums1.begin()+m);
        nums3.insert(nums3.end(),nums2.begin(),nums2.begin()+n);
        sort(nums3.begin(),nums3.end());
        nums1=nums3;
    }
};
