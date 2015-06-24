#include <iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if (!str.length()) return 0;
        long long result = 0;
        bool nonNeg = true;
        for (int i = 0; i < str.length(); ++i) {
            switch (str[i]) {
                case '-':
                    nonNeg = false; break;
                case ' ':
                    break;
                case '0':
                    result *= 10; break;
                case '1':
                    result = result * 10 + 1; break;
                case '2':
                    result = result * 10 + 2; break;
                case '3':
                    result = result * 10 + 3; break;
                case '4':
                    result = result * 10 + 4; break;
                case '5':
                    result = result * 10 + 5; break;
                case '6':
                    result = result * 10 + 6; break;
                case '7':
                    result = result * 10 + 7; break;
                case '8':
                    result = result * 10 + 8; break;
                case '9':
                    result = result * 10 + 9; break;
                default: break;
            }

        }
        result = nonNeg? result: (*= (-1));
        if (result > INT_MAX) return INT_MAX;
        else if (result < INT_MIN) return INT_MIN;
        else return result;
    }
};
