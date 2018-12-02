#include <string>
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int limit;
	cin >> limit;
	int lines;
	cin >> lines;
	int total = limit;
	for (int x = 0; x < lines; x++)
	{
		int currentNum;
		cin >> currentNum;
		total += (limit - currentNum);

	}
	if (total < 0)
		total = 0;
	cout << total;
	return 0;

}