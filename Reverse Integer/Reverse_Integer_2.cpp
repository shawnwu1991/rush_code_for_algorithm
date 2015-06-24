#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long result = 0, num = 0;
        bool nonNum = x > 0? true: false;
        x = abs(x);
        while (0 < x) {
            num = x % 10;
            result = result * 10 + num;
            x = x / 10;
        }
        if (result < INT_MIN || result > INT_MAX) return 0;
        return nonNum? result: (result *= -1);
    }
};
