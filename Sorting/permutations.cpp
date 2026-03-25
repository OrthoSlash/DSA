#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void func(vector<int>& nums, vector<int>& temp, vector<vector<int>>& result, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;

            used[i] = true;
            temp.push_back(nums[i]);

            func(nums, temp, result, used);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        sort(nums.begin(), nums.end());

        func(nums, temp, result, used);
        return result;
    }
};
