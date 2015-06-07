#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        for (size_t i = 0; i < k; ++i) {
            temp = nums.back();
            nums.insert(nums.begin(), temp);
            nums.pop_back();
        }
    }
};
