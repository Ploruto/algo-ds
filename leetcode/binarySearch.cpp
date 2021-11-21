#include <vector>

//first if statement is not necessary ( I think )
int search(std::vector<int>& nums, int target) {
        if(nums.size() == 1 && nums[0] == target) return 0;
        int l = 0, r = nums.size() - 1, mid = (nums.size() - 1) / 2;
    while(l <= r){
        mid = l + (r-l) / 2;
        if(nums[mid] == target) return mid;
        else if(target < nums[mid]) r = mid - 1;
        else if(target > nums[mid]) l = mid + 1;
    }
    return -1;

}
