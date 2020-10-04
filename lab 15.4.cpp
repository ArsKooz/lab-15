#include <iostream>

using namespace std;

int quarter(float x, float y)
{
	int k;
	if (x > 0 && y > 0)
	{
		k = 1;
	}
	if (x > 0 && y < 0)
	{
		k = 2;
	}
	if (x < 0 && y < 0)
	{
		k = 3;
	}
	if (x < 0 && y>0)
	{
		k = 4;
	}
	return k;
}
int main()
{
	float x, y;
	cout << "Vvedite znacheniya x y\n";
	cin >> x >> y;
	cout << quarter(x, y) << "-ya chetvert'";
}