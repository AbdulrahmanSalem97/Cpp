#include <iostream>
#include <string>
using namespace std;
/*Person Class*/
class person
{
    private:
    string name;
    int age;
    string type;

    public:
   /* person(string Local_Name,int Local_Age,string Local_Type):name(Local_Name),age(Local_Age),type(Local_Type)
    {
        cout<<"Hello Person"<<endl;
    }*/
    void Set_Person_Name(string Local_Name)
    {
        name = Local_Name;
    }
    void Set_Person_Age(int Local_Age)
    {
        age = Local_Age;
    }
    void Set_Person_type(string Local_Type)
    {
        type = Local_Type;
    }
    virtual void DisplayData(void)
    {
        cout<<"Name: "<< name<<endl;
        cout<<"Age: "<< age<<endl;
        cout<<"Type: "<< type<<endl;
    }

    ~person()
    {
        cout<<"Goodbye Person"<<endl;
    }
};

/*Empolyee Class from Person*/
/*class employee: public person
{
    private:
    int salary;
    int work_hours_week;

    public:
    void Set_Empolyee_salary(int Local_salary)
    {
        salary = Local_salary;

    }
    void Set_Empolyee_wh(int Work_Hours)
    {
        work_hours_week = Work_Hours;
        
    }
     void DisplayData(void)
    {   
        //Display for class person first
        person::DisplayData();
        cout<<"Salary: "<<salary<<endl;
        cout<<"Working Hours/week: "<<work_hours_week<<endl;
    }
    


};*/

/*Student Class from Person*/
class Student //: public person
{
    private:
    float GPA;
    int level;

    public:
    /*Student(string Local_Name,int Local_Age,string Local_Type, float Local_GPA ,int Local_Level): GPA(Local_GPA),level(Local_Level),person(Local_Name,Local_Age,Local_Type)
    {
        cout<<"Hello Student"<<endl;
    }*/

    void Set_Student_GPA(float Local_GPA)
    {
        GPA=Local_GPA;
    }
    void Set_Student_Level(int Local_Level)
    {
        level=Local_Level;
    }
    void DisplayData(void)
    {   
        //Display for class person first
       // person::DisplayData();
        cout<<"GPA: "<<GPA<<endl;
        cout<<"Level: "<<level<<endl;
    }
    ~Student()
    {
        cout<<"Goodbye Student"<<endl;
    }
};

/*Athelete Class from Student From person*/
class athelete: public Student
{
    private:
    int weight;
    int Championships;


    public:
    void Set_weight(int Local_weight)
    {
            weight=Local_weight; 
    }
     void Set_champs(int Local_champ)
    {
            Championships=Local_champ; 
    }
    void DisplayData(void)
    {   
        //Display for class person first
        Student::DisplayData();
        cout<<"weight: "<<weight<<endl;
        cout<<"no of Championships: "<<Championships<<endl;
    }



};

class employee : public person
{
    private :
    int salary;
    string job_name;

    public:
    void Set_employee_salary(int Local_salary)
    {
        salary = Local_salary;
    }
    void Set_employee_job(string Local_job)
    {
        job_name = Local_job;
    }
    void DisplayData()
    {   
        person::DisplayData();
        cout<<"Salary: "<<salary<<endl;
        cout<<"Job : "<<job_name<<endl;
    }
};
class multitasker :public Student, public employee
{
    private:
    int working_hours;
    int study_hours;

    public:
    void Set_Working_hours(int Local_work_hours)
    {
        working_hours= Local_work_hours;

    }
    void Set_study_hours(int Local_study_hours)
    {
        study_hours= Local_study_hours;

    }
    void DisplayData()
    {
        Student::DisplayData();
        employee::DisplayData();
        cout<<"Working Hours: "<<working_hours<<endl;
        cout<<"Study Hours: "<<study_hours<<endl;
    }

};
class achiever : public multitasker
{   
    private:        
    int courses_no;
    int certificates;

    public:
    void Set_courses_no(int Local_courses)
    {
        courses_no=Local_courses;
    }

    void Set_certificates_no(int Local_certificates)
    {
        certificates=Local_certificates;
    }
    void DisplayData(void)
    {
        multitasker::DisplayData();
        cout<<"Courses Number:"<<courses_no<<endl;
        cout<<"Certificates Number"<<certificates<<endl;
    }
};


int main()
{   
    achiever a1;
    a1.Set_Person_Name("ahmed");
    a1.Set_Person_Age(16);
    a1.Set_Person_type("Male");
    a1.Set_Student_GPA(2.9);
    a1.Set_Student_Level(9);
    a1.Set_study_hours(25);
    a1.Set_Working_hours(20);
    a1.Set_certificates_no(3);
    a1.Set_courses_no(4);
    a1.Set_employee_job("Freelancer");
    a1.Set_employee_salary(1200);
    a1.DisplayData();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*employee e1;
    e1.Set_Empolyee_salary(5000);
    e1.Set_Empolyee_wh(50);
    e1.Set_Person_Age(35);
    e1.Set_Person_Name("Ahmed");
    e1.Set_Person_type("Male");
    e1.DisplayData();*/

    cout<<"---------------------------------------------------------------------------------"<<endl;

    /*athelete a1;
    a1.Set_Person_Age(16);
    a1.Set_Person_Name("ziad");
    a1.Set_Person_type("Male");
    a1.Set_weight(70);
    a1.Set_Student_GPA(2.9);
    a1.Set_Student_Level(9);
    a1.Set_champs(3);
    a1.DisplayData();*/
    


    /*Student s1("Ahmed",16,"Male",3.5,7);
    /*s1.Set_Person_Name("Salem");
    s1.Set_Person_Age(30);
    s1.Set_Person_type("male");
    s1.Set_Student_GPA(3.3);
    s1.Set_Student_Level(4);
    s1.DisplayData();*/



    /*person P1;

    P1.Set_Person_Name("Abdulrahman");
    P1.Set_Person_Age(26);
    P1.Set_Person_type(true);
    P1.DisplayData();*/



    return 0;
}