#include <iostream>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> calculator;
        int temp;
        for (size_t i = 0; i < s.size(); ++i) {
            if (' ' == s[i]) continue;

            if ('0' <= s[i] && s[i] <= '9') {
                calculator.push_back((s[i] - '0'));
                continue;
            }

            if () {

            }



        return result;
    }

    stack<int> getFormulation(string s) {
        stack<int> tempForm;
        for (size_t i = 0; i < s.size(); ++i) {
            if ('' == s[i]) continue;

            if ('+' == s[i] || '-' == s[i]) {

            }else
                tempForm.push_back(s[i]);
        }
    }
};
