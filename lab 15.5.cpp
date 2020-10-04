#include <iostream>

using namespace std;

float fact2(int n)
{
	int s, i;
	s = 1;
	if (n % 2 == 0)
	{
		for (i = 2;i <= n;i += 2)
		{
			s *= i;
		}
	}
	else
	{
		for (i = 3;i <= n;i += 2)
		{
			s *= i;
		}
	}
	return s;
}
int main()
{
	int n;
	cout << "Vvedite znachenie N\n";
	cin >> n;
	cout << fact2(n);
}