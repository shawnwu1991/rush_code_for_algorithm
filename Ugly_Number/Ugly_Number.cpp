#include <iostream>
using namespace std;

class Solution {
    public:
        bool isUgly(int num) {
            if (1 == num) return true;
            if (num < 1) return false;
            while (num > 1) {
                if (!(num % 2)) {num = num / 2; continue; }
                else if (!(num % 3)) {num = num / 3; continue; }
                else if (!(num % 5)) {num = num / 5; continue; }
                else return false;
            }
            return true;
        }
};
