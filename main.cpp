#include <iostream>
//#include "rectangle.hh"
#include "operation.cpp"

using namespace std;

int main(){
    double l,b;
    cout<< " Enter the length and breadth of reactangle" << endl;
    cin>>l>>b;
    rectangle r1;
    //rectangle r1(l,b); //Constructor
    rectangle r2(2.5,4.5);
    rectangle r3(5,8.5);
    rectangle r4(9,10);

    cout << "Area of rectangle with length = "<<l<<" and breadth = " <<b <<" is "<<r1.area()<<" units squared "<<endl;
    cout << "Perimeter of rectangle with length = "<<l<<" and breadth = " <<b <<" is "<<r1.perimeter()<<" units "<<endl;

    double l1,b1;
    cout<< " Enter the new length and breadth of reactangle" << endl;
    cin>>l1>>b1;
    r1.setlb(l1,b1);
    cout << "Area of rectangle with length = "<<l1<<" and breadth = " <<b1 <<" is "<<r1.area()<<" units squared "<<endl;
    cout << "Perimeter of rectangle with length = "<<l1<<" and breadth = " <<b1 <<" is "<<r1.perimeter()<<" units "<<endl;

    return 0;
}