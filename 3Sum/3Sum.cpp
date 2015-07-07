#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results(0);
        if (nums.size() < 3) return results;
        unordered_map<int, int> mapping(-1);
        for (int i = 0; i < nums.size(); ++i) mapping[nums[i]] = i;
        for (int i = 0; i < nums.size(); ++i) {
            if (mapping[0 - nums[i]] >= 0) {
                 vector<int> oneResult, otherTwo;
                 oneResult.push_back(nums[mapping[0 - nums[i]]]);
                 otherTwo = otherTwoSum(nums, mapping[0 - nums[i]], mapping);
                 sort(oneResult, otherTwo);
                 mapping[0 - nums[i]] = -1;
                 //the other two nums' indices also being reset to -1.
            }
        }
        return results;
    }
};
