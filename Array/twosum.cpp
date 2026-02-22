#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> x;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (x.find(target - num) != x.end()) {
                return {i, x[target - num]};
            }
            x[num] = i;
        }

        return {};
    }
};
