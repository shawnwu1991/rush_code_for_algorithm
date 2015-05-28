#include <iostream>

using namespace std;

class Solution {
    string addBinary(string a, string b) {
    	if (!a.size()) return b;
	if (!b.size()) return a;

	string result;
	int carry = 0;
	int aNum = 0;
	int bNum = 0;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int iterNum = a.size() > b.size() ? a.size() : b.size();

	for (size_t i = 0; i < n; ++i) {
	    aNum = i < n ? a.at(i) - '0' : 0;
	    bNum = i < n ? b.at(i) - '0' : 0;
	    result.insert(result.begin(), ((aNum + bNum + carry) % 2) + '0');
	    carry = (aNum + bNum + carry)/2;
	}

	if (carry) result.insert(result.begin(), '1');
	return result;
    }
};
