#include<iostream>
#include<string>
using namespace std;
class car {
private:
	string model;
	int year;
public:
	car(string m,int y):model("m"), year(y) {
		
		cout << model<<	endl;
		cout << year;
	}
	
};

int main() {
	car c1("bmw", 2019);
	
	return 0;
}
