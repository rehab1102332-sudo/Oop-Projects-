
#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    void setleanth(float len) {

        if (len >= 0)
        {
            length = len;
        }
        else
            cout << "error";
    }
    void setwidth(float wid) {
        if (wid >= 0)
        {
            width = wid;
        }
        else
            cout << "error,please enter positive values only";
    }
    
    float getlength() {
        return length;
    }
    float getwidth() {
        return width;
    }
    float Area() {
        return length * width;
    }
};
int main()
{
    Rectangle obj1;
    obj1.setleanth(32.3);
    obj1.setwidth(4.5);
   cout<<"the rectangle area is"<<"   " <<obj1.Area();
   return 0;
}

