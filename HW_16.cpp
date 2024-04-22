#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	const int length = 5;
	int array[length][length];
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			array[i][j] = i + j;
		}
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << array[i][j] << ' ';
		}
		cout << endl;
	}
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[buf.tm_mday%length][i];
	}
	cout << sum << endl;
}

