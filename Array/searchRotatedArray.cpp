#include<iostream>
#include<vector>

usng namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target)
                ans = i;
        }
        return ans;
    }
};

// Solution with O(logn) comlexity

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};
