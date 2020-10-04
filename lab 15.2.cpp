#include <iostream>

using namespace std;

int sign(float x)
{
	if (x < 0)
	{
		x = -1;
	}
	if (x == 0)
	{
		x = 0;
	}
	if (x > 0)
	{
		x = 1;
	}
	return x;
}
int main()
{
	float a, b;
	int n;
	cout << "Vvedite znacheniya A B\n";
	cin >> a >> b;
	n = sign(a) + sign(b);
	cout << "Sign(A)+Sign(B)=" << n;
}