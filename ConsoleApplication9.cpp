#include <iostream>
#include<string>
using namespace std;
class room {
private:
    int roomnumber;
    string roomtybe;
    float price;
    bool available;
public:
    room(int num, float p, bool ava ,string t="standered") {
        roomnumber = num;
        price = p;
        available = ava;
        roomtybe=t;
    }
    void bookroom() {
        if (available == false) {
            available = false;
            cout << "the room is booked";
        }
        else
            available = true;

            cout << "the room is available"<<endl;
        
    }
    void releaseroom() {
        available = true;
    }
    void displayinfo() {
        cout << roomnumber << endl;
        cout << roomtybe << endl;
        cout << price << endl;
        cout << available << endl;
   }
};
int main()
{
   
    room r1 (101,150.0,true,"deluxe");
    r1.bookroom();
    r1.displayinfo();
    r1.releaseroom();
    return 0;
}
