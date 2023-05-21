#include <iostream>
#include <string>


using namespace std;

template <typename T1,typename T2>
T1 sum(T1 num1, T2 num2)
{
   return (num1 + num2);
}    

int main()
{

    cout << sum <int,int>       (5,10)       <<endl;
    cout << sum <char,int>      ('A',10)     <<endl;
    cout << sum <string,string> ("hi","bye") <<endl;
    cout << sum <double,int>    (3.5,10)     <<endl;
    
    return 0;
}