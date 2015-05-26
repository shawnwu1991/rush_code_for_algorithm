#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
    string addBinary(string a, string b) {
    	int aNum = a.size();
	int bNum = b.size();

	if (0 == aNum) return b;
	if (0 == bNum) return a;

	int iterNum = 0;
	bool isCarry = false;
	char tempChar;
	string reverseResult;
	string result;
	
	if (aNum <= bNum) 
	    iterNum = aNum;
	else
	    iterNum = bNum;
	
	while (iterNum > 0) {
	    if ((a.at(aNum) == b.at(bNum)) && (0 == a.at(aNum))) {
	    	tempChar = '0';
		if (true == isCarry) {
		    tempChar = '1';
		    isCarry = false;
		}
	    }else if ((a.at(aNum) == b.at(bNum)) && (1 == a.at(aNum))) {
	    	if (true == isCarry)
		    tempChar = '1';
		else
		    tempChar = '0';
		isCarry = true;
	    }else {
	    	if (true == isCarry) {
		    tempChar = '0';
		    isCarry = true;
		}else
		    tempChar = '1';
	    }
	    reverseResult.push_back(temp);
	}

	if (true == isCarry) {
	    
	}else {
	    
	}
    }
};
