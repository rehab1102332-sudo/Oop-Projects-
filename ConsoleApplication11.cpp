#include <iostream>
using namespace std;
class time {
private:
	int s, m, h;
public:
	time(int);
};
time::time(int x) {
	s = x;
		m = h = 0;
		while (x >= 60) {
			m++;
			x -= 60;
		}
		while (m >= 60) {
			h++;
			m -= 60;
		}
	cout << "sec=" << s << endl;
	cout << "min=" << m << endl;
	cout << "hour=" << h << endl;
}
int main() {
	int n;
	cin >> n;
	time t(n);
	time t2(432668);

	return 0;
	
}