#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (0 == x) return true;
        x = abs(x);
        int len = lenInt(x);
        while (x != 0 && len != 1) {
            if ((x % 10) != (x / pow(10, len))) return false;
            x = x - (x / pow(10, len)) * pow(10, len);
            x /= 10;
            len--;
        }
        return true;
    }
    int lenInt(int x) {
         int len = 0;
         while (x != 0) {
              len++;
              x /= 10;
         }
         return len;
    }
};
