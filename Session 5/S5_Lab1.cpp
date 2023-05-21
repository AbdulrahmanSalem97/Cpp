#include <iostream>
#include<string>

using namespace std;
class shape
{
public:

    virtual void area ()=0;
    virtual void  circumference()=0;
};
class rectangle :public shape
{
public:
    int l,w;
    void area ()
    {
        cout<<"area of rectangle: "<<(w*l)<<endl;
    }
    void  circumference()
    {
        cout<< "area of circumference: "<<(w+l)<<endl;
    }

};
class circle :public shape
{
    public: 
    int length;
    void area ( )
    {
        cout<<"area of circle: "<<(length*length)<<endl;
    }
    void  circumference()
    {
        cout<<"area of circle: "<<(length*2)<<endl;
    }

};
class triangle :public shape
{
private:
    int width;
    int length;
public:
    void area ()
    {
        cout<<"area of triangle: "<<(width*length)<<endl;
    }
    void  circumference()
    {
        cout<<"area of triangle: "<<(width+length)<<endl;
    }

};
int main()
{
    triangle t1;
    t1.triangle::area();
    t1.triangle::circumference();

    circle c1;
    c1.circle::area();
    c1.circle::circumference();

    rectangle r1;
    r1.rectangle::area();
    r1.rectangle::circumference();

    return 0;
}