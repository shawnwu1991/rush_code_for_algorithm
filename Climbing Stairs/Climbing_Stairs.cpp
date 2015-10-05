#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
    	if (1 == n) return 1;
        if (2 == n) return 2;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
