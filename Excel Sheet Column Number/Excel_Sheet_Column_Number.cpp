#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class  Solution
{
	public:
		int titleToNumber(string s)
		{
			try
			{
				int s_len = s.length();
				int num = 0;
				for (size_t i = 0; i < s_len; i++)
				{
					num += ((int)s.at(i) - 64) * pow(26, (s_len - i - 1));
				}
				return num;
			}
			catch (exception e)
			{
				cout << "Error!" << endl;
			}
			
		}
	private:

};