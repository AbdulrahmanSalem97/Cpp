#include <iostream>

using namespace std;

class school
{
private:

     int students;
    int teachers;
    static int counter;
public:
    static void sum(int n1,int n2)
    {
       // counter++;

        cout<<"sum ="<<n1+n2<<endl;
    }

    void Get_school_data();

    ~school()
    {
        cout<<"good bye"<<endl;
    }
    school(int copy_students,int copy_doctors):students(copy_students),teachers(copy_doctors)
    {
        counter++;
        cout<<"counter = "<<counter<<endl;

    }
};
int school::counter=0;
int main()
{

   school::sum(10,20);

    return 0;
}
    void school::Get_school_data()
    {
        cout<<"number of students: "<<students<<endl;
        cout<<"number of teachers: "<<teachers<<endl;
    }