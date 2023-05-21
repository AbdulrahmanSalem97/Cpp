#include<iostream>
using namespace std;
class School
{
    private :
    int students =10; 
    int teachers =10;
    int count;
    public : 
    School()
    {
        cout<<"hello";
    }
    School (int a )
    {
        cout << "int constructor "<<endl;
    }
    School(double x)
    {
        cout<< "double constructor "<<endl;
    }
     School operator --()
    {
        --count;
        return  School(count);
    }
    ~School()
    {
        cout<<" Bye "<<endl;
    }
   
};
int main()
{
    School   Modern(10) ;
    School   Safwa(10) ;
    Modern=--Safwa;




    School   Delta(9.9);
    

}
