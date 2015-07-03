#include <iostream>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result;
        while (num >= 1) {
            if (num / 1000 >= 1) {result.push_back('M'); num -= 1000; continue; }
            if (num /  500 >= 1) {result.push_back('D'); num -=  500; continue; }

        }
        return ;
    }
};
