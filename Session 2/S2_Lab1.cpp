#include <iostream>
#include <string>

using namespace std;

class school
{
    private:
    int max_students;
    int students_num;
    int teachers_num;

    public:
    string name;
    void set_max_students(int local_max)
    {
        if(local_max<100)
        {
            max_students = local_max;
        }
    }

    void set_students_num(int local_students_num)
    {
        if (local_students_num<max_students)
        {
            students_num = local_students_num;
        }
    }

    void set_teachers_num(int local_teachers_num)
    {
        if (local_teachers_num<10)
        {
            teachers_num = local_teachers_num;
        }
    }

    void display_data(void)
    {
        cout << "school name is : " << name << endl;
        cout << "max number of students= " << max_students << endl;
        cout << "Total number of students=  " << students_num << endl;
        cout << "Number of teachers= "<< teachers_num <<endl;

    }
};

int main()
{
    school School1;
    School1.name="delta";
    School1.set_max_students(50);
    School1.set_students_num(25);
    School1.set_teachers_num(5);
    School1.display_data();

    cout<<"____________________________________________________________________________________________________________________________________________________________________"<<endl;

    school School2;
    School2.name="modern";
    School2.set_max_students(75);
    School2.set_students_num(50);
    School2.set_teachers_num(9);
    School2.display_data();


    return 0;
}