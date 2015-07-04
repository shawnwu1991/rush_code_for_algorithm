#include <iostream>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result;
        while (num >= 1) {
            if (num / 1000 >= 1) {result.push_back('M'); num -= 1000; }
            else if (num /  500 >= 1) {result.push_back('D'); num -=  500; }
            else if (num /  100 >= 1) {result.push_back('C'); num -=  100; }
            else if (num /   50 >= 1) {result.push_back('L'); num -=   50; }
            else if (num /   10 >= 1) {result.push_back('X'); num -=   10; }
            else if (num /    5 >= 1) {result.push_back('V'); num -=    5; }
            else {result.push_back('I'); num -= 1; }

            result = validRoman(result);
        }
        return result;
    }
};
