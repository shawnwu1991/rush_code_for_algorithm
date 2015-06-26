#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(0);
        map<int, int> mapping;

        for (int i = 0; i < nums.length(); ++i)
            mapping[nums[i]] = i;
        for (int i = 0; i < nums.length(); ++i) {
            int leaveNum = target - nums[i];
            if ((mapping.find(leaveNum) != nums.end()) &&
                    mapping[leaveNum] != i) {
                 result.push_back(i + 1);
                 result.push_back(mapping[leaveNum] + 1);
                 return result;
            }
        }
        return result;
    }
};
