#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(0);
        for (int i = 0; i < nums.length(); ++i)
            for (int j = i + 1; i < nums.length(); ++j)
                if (nums[j] == (target - nums[i])) {
                    result.push_back(i + 1);
                    result.push_back(j + 1);
                    return result;
                }
        return result;
    }
};
