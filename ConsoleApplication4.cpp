
#include <iostream>
using namespace std;
class maximum {
private:
	 int a,b,c;
	 int max ;
	 int min ;
public:

	void setmax(int x,int y,int z) {
		a = x;
		b = y;
		c = z;
		max = a;
		if (b >=max) 
			max = b;
		if (c >= max)
			max = c;
	
		min = b;
		if (a < b)
			min = a;
		if (c < a)
			min = c;
			
		}
		void getmax(){
			cout<<"the max of values is ="<<max<<endl;
			cout << "the min if values is =" << min;
			}
			
		
};
int main()
{
	maximum obj;
	int x,y,z;
	cin >> x>>y>>z;
	obj.setmax(x,y,z);
	obj.getmax();
	return 0;
}

