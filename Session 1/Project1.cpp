#include <iostream>
#include <string>
using namespace std;

namespace governerate
{
    namespace city1
    {
        int Workers;
        int Students;
        int elders;
        int population;
        void print(void)
        {
            cout << "no of workers in city1 "<< Workers<<endl;
            cout << "no of students in city1 "<< Students<<endl;
            cout << "no of elders in city1 "<< elders<<endl;
            cout << "Total population in city1 "<< population<<endl;

        }

    
    }
    namespace city2
    {
        int Workers;
        int Students;
        int elders;
        int population;
        void print(void)
        {
            cout << "no of workers in city2 "<< Workers<<endl;
            cout << "no of students in city2 "<< Students<<endl;
            cout << "no of elders in city2 "<< elders<<endl;
            cout << "Total population in city2 "<< population<<endl;

        }

    }
    namespace city3
    {
        int Workers;
        int Students;
        int elders;
        int population;
        void print(void)
        {
            cout << "no of workers in city3 "<< Workers<<endl;
            cout << "no of students in city3 "<< Students<<endl;
            cout << "no of elders in city3 "<< elders<<endl;
            cout << "Total population in city3 "<< population<<endl;

        }
    }
}



template <typename T1>
T1 two_cities(T1 num1, T1 num2)
{
   return (num1 + num2);
}

template <typename T1>
T1 three_cities(T1 num1, T1 num2, T1 num3)
{   

   return (num1 + num2 + num3);
}

int main()
{
    cout << "Enter no of people of city1: ";
    cin >> governerate::city1::population;

    cout << "Enter no of students of city1: ";
    cin >> governerate::city1::Students;

    cout << "Enter number of workers in city1: ";
    cin >> governerate::city1::Workers;

    cout << "Enter no of elders of city1: ";
    cin >> governerate::city1::elders;

    cout << "Enter no of people of city2: ";
    cin >> governerate::city2::population;

    cout << "Enter no of students of city2: ";
    cin >> governerate::city2::Students;

    cout << "Enter number of workers in city2: ";
    cin >> governerate::city2::Workers ;

    cout << "Enter no of elders of city2: ";
    cin >> governerate::city2::elders ;

    cout << "Enter no of people of city3: ";
    cin >> governerate::city3::population;

    cout << "Enter no of students of city3: ";
    cin >> governerate::city3::Students ;

    cout << "Enter number of workers in city3: ";
    cin >> governerate::city3::Workers ;

    cout << "Enter no of elders of city3: ";
    cin >> governerate::city3::elders ;

    cout<< "********************************************************************"<<endl;

    governerate::city1::print();

    cout<< "********************************************************************"<<endl;

    governerate::city2::print();

    cout<< "********************************************************************"<<endl;

    governerate::city3::print();

    cout<< "********************************************************************"<<endl;

    
    cout<< "Total no of students in city1 & city2: "<<two_cities(governerate::city1::Students,governerate::city2::Students)<<endl;
    cout<< "Total no of workers in city1 & city2 & city3: "<<three_cities(governerate::city1::Workers,governerate::city2::Workers,governerate::city3::Workers);

    
    return 0;
}