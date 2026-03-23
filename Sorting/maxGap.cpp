#include<iosteram>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,max=0;
        for(int i=0;i<nums.size()-1;i++){
            ans = nums[i+1]-nums[i];
            if(max<ans)
                max=ans;
        }
        return max;
    }
};
