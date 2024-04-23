#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int sum = 0;
	const int length = 5;
	int array[length][length];
	for (int i = 0; i < length; i++)
	{
		
		for (int j = 0; j < length; j++)
		{
			array[i][j] = i + j;
			if (i == buf.tm_mday % length)
			{
				sum += array[i][j];
			}
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
	
	/*for (int i = 0; i < length; i++)
	{
		sum += array[buf.tm_mday%length][i];
	}*/
	cout << sum << endl;
}

