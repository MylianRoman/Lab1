#include <iostream>;
#include <math.h>;
using namespace std;

int main()
{
	float a, b;
	float x = 0.48;
	float y = 0.47;
	float z = -1.32 * 6;

	float x_p = -1;
	float x_k = 1;
	float dx = 0.2;

	cout << "x\t" << "a\t" << "b\t" << endl;
	for (float x = x_p; x <= x_k + 1e-9; x += dx)
	{
		float b = pow(cos(atan((pow(x, 2) + y) / (z + 1))), 2)
			+ (x / z) * pow(exp(1.0), (3 * x + y));

		float a = (1 + pow(pow(sin(pow(x + y, 0.4)), 2), 1.0 / 2.0))
			/ (2 + pow(b, 2) + pow(sin(pow(y - z, 3)), 2));

		cout << x << "\t" << a << "\t" << b << endl;
	}
}







