#include <iostream>
#include <string>

using namespace std;

class Hospital 
{
    private:
    int Patient_no=0;
    int M;
    int Doctors_no;
    int Nurses_no;
    int Available_Rooms=100;
    typedef struct patient
    {   
        string Patient_Name;
        int Patient_ID;
        string status;
        string gender;
    }Patient;

    public:
    string name;
     

    Patient Patients[100];

    void Patients_max(int Maxno_patients)
    {
        if(Maxno_patients<100)
        {
            M = Maxno_patients;
        }
    }

    void AddPatient(string Patient_Name,int Patient_ID,string status,string gender)
    {
        Patients[Patient_ID-1].Patient_ID= Patient_ID;
        Patients[Patient_ID-1].Patient_Name= Patient_Name;
        Patients[Patient_ID-1].status= status;
        Patients[Patient_ID-1].gender= gender;
        Patient_no++;
        Available_Rooms--;
    }

    void ViewPatient(int ID)
    {   
        int temp = -1;
        for(int i=0;i<100;i++)
        {
            if(Patients[i].Patient_ID==ID)
            {
                temp = i;
                break;
            }
        }
        if(temp!=-1)
        {
            cout<< "Patient ID is :"<<Patients[temp].Patient_ID<<endl;
            cout<< "Patient gender is:"<<Patients[temp].gender<<endl;
            cout<< "Patient Name is:"<<Patients[temp].Patient_Name<<endl;
            cout<< "Patient Status is:"<<Patients[temp].status<<endl;

        }
        else
        {
            cout<<"ID doesn't exists!!"<<endl;
        }

    }
    
    void Set_Doctors_no(int Doctors)
    {
        if (Doctors<10)
        {
            Doctors_no = Doctors;
        }
    }

    void Set_Nurses_no(int Nurses)
    {
        if (Nurses<10)
        {
            Nurses_no = Nurses;
        }
    }
   
    void display_data(void)
    {
       cout<< "Total number of patients is: "<<Patient_no<<endl;
       cout<< "Total number of doctors is:  "<<Doctors_no<<endl;
       cout<< "Total number of nurses is:   "<<Nurses_no<<endl;
       cout<< "Available Rooms number is:   "<<Available_Rooms<<endl;

    }
};

int main()
{   

    Hospital hospital1;
    hospital1.name="Al-Safwa Hosptial";
    hospital1.Set_Doctors_no(5);
    hospital1.Set_Nurses_no(9);
    
    string Patient_Name;
    int Patient_ID;
    string status;
    string gender;

    int flag=0,choise1;


    cout<<"*************************************************************************************************************"<<endl;
    cout<<"*************************************Welcome To Hospitals Management systems*********************************"<<endl;
    cout<<"*************************************************************************************************************"<<endl;
    cout<<"Welcome to Al-Safwa Hospital" <<endl;
    while (1)
    {
        
        cout<<"1)Add new Patient" <<endl;
        cout<<"2)View Patient Data" <<endl;
        cout<<"3)View Hospital Data" <<endl;
        cout<<"4)Exit" <<endl;
        cout<<"Choise :";
        cin >> choise1;
        switch (choise1)
        {
        case 1: cout<<"Enter Patients Name: ";
                cin >> Patient_Name;
                cout<< "Enter Patients ID: ";
                cin >> Patient_ID;
                cout<< "Enter Patients Status: ";
                cin >> status;
                cout<< "Enter Patients Gender: ";
                cin >> gender;
                hospital1.AddPatient(Patient_Name,Patient_ID,status,gender);
                system("cls");
                cout<< "Data added successfully "<<endl;
            break;

        case 2: cout<<"Enter Patients ID: " <<endl;
                cin >> Patient_ID;
                hospital1.ViewPatient(Patient_ID);
        break;

        case 3: hospital1.display_data();
                
        break;
        case 4: flag=1;
        break;
                
        
        default: 
            break;
        }
        if(flag==1)
        {
            break;
        }

    }
    return 0;
}
