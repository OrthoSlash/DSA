#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0;
        int max_area=0;
        while(left<right){
            area=(right-left)*min(height[right],height[left]);
            max_area=max(area,max_area);
            if(height[left]>height[right]){
                right--;
            }else{
                left++;
            }
        }
        return max_area;
    }
};
