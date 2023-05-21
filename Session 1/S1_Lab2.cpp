#include <iostream>
#include <string>

using namespace std;

namespace circle
{       

        void area(int diam)
        {
                cout << "The area of circle = "  << 3.14*diam*diam << endl;
        }
        void circumf(int diam)
        {       
                cout << "The circumference of circle = "  << 2*3.14*diam << endl;
        }
}

namespace triangle
{       
        void area(int base, int height)
        {
             cout << "The area of triangle = "  << 0.5*base*height << endl;   
        }
        void circumf(int x1, int x2, int x3)
        {       
             cout << "The circumference of triangle = "  << (x1+x2+x3) << endl;
        }
}

namespace rectangular
{
        void area(int x1, int x2)
        {
             cout << "The area of rectangular = "  << x1*x2 << endl; 
        }
        void circumf(int x1, int x2)
        {       
             cout << "The circumference of rectangular = "  << 2*(x1+x2) << endl;
        }
}

int main() 
{

        circle::area(5);
        circle::circumf(5);

        triangle::area(10,8);
        triangle::circumf(8,6,10);

        rectangular::area(8,6);
        rectangular::circumf(8,6);

  return 0;
}