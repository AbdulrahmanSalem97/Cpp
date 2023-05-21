#include <iostream>

using namespace std;

class school
{
private:

     int students=0;
    int teachers=0;
    static int counter;
public:
    static void sum(int n1,int n2)
    {
       // counter++;

        cout<<"sum ="<<n1+n2<<endl;
    }

    void Get_school_data();
    school operator ++()
    {
        int t1,t2;
        t1=students;
        t2=teachers;
        t1++;
        t2++;
        return school(t1,t2);

    }
     school operator ++(int)
    {
        int t1,t2;
        t1=students;
        t2=teachers;
        t1++;
        t2++;
        return school(t1,t2);

    }
     school operator --()
    {
         int t1,t2;
        t1=students;
        t2=teachers;
        t1--;
        t2--;
        return school(t1,t2);

    }
     school operator --(int)
    {
        int t1,t2;
        t1=students;
        t2=teachers;
        t1--;
        t2--;
        return school(t1,t2);

    }
      school operator +(school t)
    {
        int temp1,temp2;
        temp1=students+t.students;
        temp2=teachers+t.teachers;
        return school(temp1,temp2);

    }
    school operator -(school t)
    {
        int temp1,temp2;
        temp1=students-t.students;
        temp2=teachers-t.teachers;
        return school(temp1,temp2);

    }
     school operator *(school t)
    {
        int temp1,temp2;
        temp1=students*t.students;
        temp2=teachers*t.teachers;
        return school(temp1,temp2);

    }
     school operator /(school t)
    {
        int temp1,temp2;
        temp1=students/t.students;
        temp2=teachers/t.teachers;
        return school(temp1,temp2);

    }

    ~school()
    {
        cout<<"good bye"<<endl;
    }
    school(int copy_students,int copy_doctors):students(copy_students),teachers(copy_doctors)
    {


    }
};

int main()
{
    school f1(50,5);
    cout<<"f1"<<endl;
    f1.Get_school_data();
    cout<<"----------------------------------"<<endl;
    school f2=++f1;
    cout<<"f2"<<endl;
    f2.Get_school_data();
    cout<<"----------------------------------"<<endl;
    school f3=--f1;
    cout<<"f3"<<endl;
    f3.Get_school_data();
    cout<<"----------------------------------"<<endl;
    cout<<"f4"<<endl;
    school f4=((f3*f2)+(f3/f1));
    f4.Get_school_data();


    return 0;
}
    void school::Get_school_data()
    {
        cout<<"number of students: "<<students<<endl;
        cout<<"number of teachers: "<<teachers<<endl;
    }