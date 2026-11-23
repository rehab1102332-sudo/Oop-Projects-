

#include <iostream>
using namespace std;
class time1 {
private:
	int sec;
	int min;
	int hours;
	int secover;
public:
	void setsec(int n) {
		if (n >= 0)
			sec = n;
		else
			cout << "error please enter positive number";
	}
		void calctime(){
			hours = sec /3600;
			sec = sec % 3600;
			min = sec / 60;
			sec= sec % 60;
			secover = sec % 60;
		}
		void gettime() {
			cout << "hours   " << hours << endl;
			cout << "min   " << min << endl;
			cout << "secover   " << secover;
	}

};
int main()
{
	time1 obj;
	int n;
	cin >> n;
	obj.setsec(n);
	obj.calctime();
	obj.gettime();
	return 0;
}

