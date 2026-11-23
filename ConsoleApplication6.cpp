
#include <iostream>
using namespace std;
class car {
public:
	string brand, model;
	int year;
	float speed;
	void displayinfo() {
		cout << "model  " << model << endl;
		cout << "brand  " << brand << endl;
		cout << "year   " << year << endl;
		cout << "current speed    " << speed;

	}
	float accelerate(float amount) {
		if (speed <= amount) {
			speed += amount;
			cout << " speed    " << speed;
		}
		else
			cout << "error"<<endl;
		return 0;
	}
	float Break(float amount) {
		if (speed > amount) {
			speed -= amount;
			if (speed < 0) {
				speed = 0;
			}
			cout << "speed    " << speed;
		}
		else
			cout << "error2"<<endl;
		return 0;
	}
};
int main()
{
	car obj;
	obj.brand = "toyota";
	obj .model = "corolla";
	obj. year = 2022;
	obj.speed=0 ;
	obj.displayinfo();
	obj.accelerate(30);
	obj.Break(10);
	return 0;
}

