#include<iostream>
using std::cin;
using std::cout;
using std::endl;


#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6


void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 5;

#ifdef TASK_0
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TASK_0

#ifdef TASK_1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i) cout << "*";
		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j + i <= n) cout << "*";
		}
		cout << endl;
	}
#endif // TASK_2

#ifdef TASK_3
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j >= i) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
#endif // TASK_3

#ifdef TASK_4
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j + i >= n) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
#endif // TASK_4

#ifdef TASK_5
	int N = 10;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (j + i == n + 1 || i + j - n == N + 1) cout << "/";

			else if (j == n + i || i == n + j) cout << "\\";

			else cout << " ";
		}
		cout << endl;
	}
#endif // TASK_5

#ifdef TASK_6
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == i || i + j == n + 1 || i + j == n - 1 || i + j == n + 3) cout << "+";
			else cout << "-";
		}
		cout << endl;
	}
#endif // TASK_6


}