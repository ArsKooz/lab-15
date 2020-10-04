#include <iostream>

using namespace std;

float powerA3(float a)
{
	float  b;
	b = a * a * a;
	return b;
}
int main()
{
	float x;
	int i;
	cout << "Vvedite znacheniya\n";
	for (i = 1;i <= 5;i++)
	{
		cin >> x;
		cout << "3-ya Stepen' chisla " << x << "=";
		x = powerA3(x);
		cout << x<<"\n";
	}
}
