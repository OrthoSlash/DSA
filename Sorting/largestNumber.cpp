#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
            void func(vector<int>&nums,vector<bool>&used,string &ans){
            int max = 0;
            for(int i=0;i<nums.size();i++){
                double nums1 = nums[i];
                if(used[i] == true)
                    continue;
                if(nums1 >= 10)
                    nums1 = nums1/10;
                if(nums1 > max)
                    max = nums1;
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i] == max){
                    used[i] = true;
                    max = nums[i];
            }
            }
            ans += to_string(max);
        }
    string largestNumber(vector<int>& nums) {
        string ans = "";
        vector<bool>used(nums.size());
        for(int i=0;i<nums.size();i++)
            func(nums, used, ans);
        return ans;
    }
};
