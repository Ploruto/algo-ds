#include <unordered_set>
#include <vector>

//idea: insert into unordered_set and if set.find(element) -> element is already in set -> containsDuplicate
bool containsDuplicate(std::vector<int>& nums) {
         std::unordered_set<int> set;
    for(int x: nums){
        if(set.find(x) != set.end()) return true;
        set.insert(x);
    }
    return false;
}
