//
// Created by go on 2018/1/12.
//

#include "Mydata.h"
#include <iostream>
using namespace std;


Mydata::Mydata(){

}

bool Mydata::MobaiXiao()
{
    return this->mobai("xiao", 10000); // 正确
}
bool Mydata::mobai(char* cowname, int mobai_times)
{
    // 膜拜神牛。
    return true;
}



  Shape::Shape( int a, int b)
    {
        width = a;
        height = b;
    }

  int  Shape::area()
    {
        cout << "Parent class area :" <<endl;
        return width * height;
    }


Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}



 int Rectangle::area() {
     return width * height;
 }

class Triangle: public Shape{
public:
    Triangle( int a=0, int b=0):Shape(a, b) { }
    int area ()
    {
        cout << "Triangle class area :" <<endl;
        return (width * height / 2);
    }
};



