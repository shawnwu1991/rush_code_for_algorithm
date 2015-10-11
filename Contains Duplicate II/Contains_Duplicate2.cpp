#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> mapping;
        int i = 0;
        while (i < nums.size()) {
            if (mapping[nums[i]] == mapping.end()) mapping[nums[i]] = i;
            else if ((i - mapping[nums[i]]) <= k) return true;
            else return false;
        }
    }
};
