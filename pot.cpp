#include <iostream>
#include <string>
#include <math.h>       /* pow */

using namespace std;

int main()
{
	int amtNext;
	cin >> amtNext;
	int total = 0;
	for (int x = 0; x < amtNext; x++)
	{
		int num;
		cin >> num;
		string transNum = to_string(num);
		int firstnum = stoi(transNum.substr(0, transNum.size() - 1));
		int expo = stoi(transNum.substr(transNum.size() - 1, 1));
		int added = pow(firstnum, expo);
		//cout << firstnum << "^" << expo << endl;
		total += added;
	}
	cout << total;
    return 0;
}
