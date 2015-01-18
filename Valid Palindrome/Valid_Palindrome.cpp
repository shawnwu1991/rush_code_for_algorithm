#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Solution
{
public:
	bool isPalindrome(string s){
		string tmp_str = "";
		if (s.length() == 0)
		{
			return true;
		}
		else
		{
			for (size_t i = 0; i < s.length(); i++)
			{
				char tmp_char = s.at(i);
				if ((tmp_char >= 48 && tmp_char <= 57) ||
					(tmp_char >= 65 && tmp_char <= 90) ||
					(tmp_char >= 97 && tmp_char <= 122))
				{
					tmp_str += tmp_char;
				}
			}

			for (size_t i = 0; i < tmp_str.length() / 2; i++)
			{
				char tmp_char_front = tmp_str.at(i);
				char tmp_char_tail = tmp_str.at(tmp_str.length() - 1 - i);

				if ((tmp_char_front != tmp_char_tail) && 
					(fabs(double(tmp_char_front - tmp_char_tail)) != 32))
				{
					return false;
				}
			}
			return true;
		}
	}

};