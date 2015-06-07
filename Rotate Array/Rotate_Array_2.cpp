#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.end());
        for (size_t i = 0; i < k; ++i) {
            nums.push_back(nums.begin());
            nums.erase(nums.begin());
        }
        reverse(nums.begin(), nums.end());
    }
};
