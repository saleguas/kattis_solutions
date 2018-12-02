#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
	string finall = "";
	string input;
	cin >> input;
	finall += input.substr(0, 1);


	while (input.find("-") != string::npos)
	{
		int pos = input.find("-");
		finall += input.substr(pos + 1, 1);
		input = input.substr(pos + 1);

	}
	cout << finall;
	return 0;
}
