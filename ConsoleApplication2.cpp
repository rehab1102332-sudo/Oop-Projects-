#include <iostream>
using namespace std;
class factorial {
private:
	float fact=1;
	int num;
public:
	void setfact(int n) {
		num = n;
		for (int i = 1;i <= num;i++) {
			fact *= i;
		}
	}
void calcfact() {
		cout << fact;
		
	}
	
	

};
int main() {
	factorial obj1;
	double x;
	cin >> x;
	obj1.setfact(x);
	
	obj1.calcfact();
	
	return 0;
}