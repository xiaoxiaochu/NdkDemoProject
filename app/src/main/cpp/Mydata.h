//
// Created by go on 2018/1/12.
//

#ifndef NDKDEMOPROJECT_MYDATA_H
#define NDKDEMOPROJECT_MYDATA_H


class Mydata {

public:
    Mydata();
    bool MobaiXiao();

private:
    bool mobai(char* cowname, int mobai_times);
};

class Shape{

public:
    int width, height;
public:
    Shape( int a=0, int b=0);
    int area();
};

class Rectangle: public Shape{
public:
    Rectangle( int a=0, int b=0);
    int area();

};




#endif //NDKDEMOPROJECT_MYDATA_H
