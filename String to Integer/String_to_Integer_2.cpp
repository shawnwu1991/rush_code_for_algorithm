#include <iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        int result = 0;
        bool nonNeg = true;
        int currentIndex = 0;

        while (' ' == str[currentIndex] && currentIndex < str.length())
            currentIndex++;
        if (currentIndex < str.length() && '-' == str[currentIndex]) {
            currentIndex++;
            nonNeg = false;
        }
        else if (currentIndex < str.length() && '+' == str[currentIndex]) {
             currentIndex++;
        }
        else ;

        for (int i = currentIndex; i < str.length(); ++i)
            if (str[i] < '0' || str[i] > '9') break;
            else {
                if (nonNeg && result > INT_MAX / 10) return INT_MAX;
                if (nonNeg && result == INT_MAX / 10 && (str[i] - '0') >= 7) return INT_MAX;
                if (!nonNeg && -result < INT_MIN / 10) return INT_MIN;
                if (!nonNeg && -result < INT_MIN / 10 && (str[i] - '0') >= 8) return INT_MIN;

                result = result * 10 + str[i] - '0';
            }
        return nonNeg? result: (-1) * result;
    }
};
