#include <vector>
#include <limits>


// Space = O(n)
int maxSubArray(std::vector<int>& nums) {
    int best = std::numeric_limits<int>::lowest()+1, sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum = std::max(nums[i], sum+nums[i]);
        best = std::max(best, sum);
    }
    return best;
}
