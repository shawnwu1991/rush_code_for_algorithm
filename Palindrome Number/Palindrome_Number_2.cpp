#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int z = x;
        long y = 0;
        while (z != 0) {
            y = y * 10 + z % 10;
            z /= 10;
        }
        if (y > INT_MIN || y < INT_MAX || x != y) return false;
        else return true;
    }
};
