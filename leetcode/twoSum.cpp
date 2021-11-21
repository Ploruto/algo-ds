#include <vector>
#include <unordered_set>
#include <iostream>
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

//my idea: use a unordered_set and insert if (target - num) is not in the set;
// so there is two cases:
// 1. there is no number in the set, such that (target - iterationNum) + current iterationNum = target -> then insert iterationNum


//Time = O(n)?
std::vector<int> findNumberIndecies(std::vector<int> &nums, int value1, int value2){
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == value1) result.push_back(i);
        else if(nums[i] == value2) result.push_back(i);
    }
    return result;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_set<int> set;
    for(int x: nums){
        if(set.find(target - x) != set.end()) return findNumberIndecies(nums, x, target - x);
        else set.insert(x);
    }
    return std::vector<int>{0,0};

}

