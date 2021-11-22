#include <vector>
#include <iostream>
#include <math.h>

std::vector<int> sortedSquares(std::vector<int> &nums)
{

    if(nums.size() == 1) return std::vector<int>{nums[0]*nums[0]};
    //find point where i < 0 && i + 1 >= 0
    std::vector<int> sq;
    int l = 0;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] < 0 && nums[i+1] > -1) l = i;
    }

    int r = l + 1;

    for (int i = 0; i < nums.size(); i++) {
        if(std::abs(nums[l]) <= nums[r] && l != -1)
        {
            sq.push_back(nums[l]*nums[l]);
            l--;
        }else if(r != nums.size())
        {
            sq.push_back(nums[r]*nums[r]);
            r++;
        }
    }
   return sq;
}

int main()
{

    std::vector<int> nums{-7,-3,2,3,11};
    auto x = sortedSquares(nums);
    for(auto i: x) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
