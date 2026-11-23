
#include <iostream>
#include <cmath>
using namespace std;
class rectangle {
private:
	double s;
	double A, B, C;
public:
	double setrectangle(double x, double y, double z) {
		A = x;
		B = y;
		C = z;
			s =( A + B + C) / 2;
			return 0;

	}
	void arearectangle() {
		cout<< sqrt(s * (s - A) * (s - B) * (s - C));
	}
};
int main()
{
	rectangle obj;
	double x, y, z;
	cin >> x >> y >> z;
	obj.setrectangle(x, y, z);
	obj.arearectangle();
	return 0;
}

