class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; i++){
            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right){ 
                int ans1 = nums[i] + nums[left] + nums[right]; 
                if(abs(ans1 - target) < abs(ans - target))
                    ans = ans1;
                if(ans1 == target)
                    return ans1;
                else if(ans1 < target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};
