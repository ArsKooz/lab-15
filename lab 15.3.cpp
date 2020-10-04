#include <iostream>

using namespace std;

float ring(float r1, float r2)
{
	float s;
	s = 3.14 * r1 * r1 - 3.14 * r2 * r2;
	return s;
}
int main()
{
	float r1, r2;
	int i;
	cout << "Vvedite znacheniya R1 R2\n";
	for (i = 1;i <= 3;i++)
	{
		cin >> r1 >> r2;
		cout << "S kolca=" << ring(r1, r2)<<"\n";
	}
}