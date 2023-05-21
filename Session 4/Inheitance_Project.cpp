/**************************************************************************/
/*****************  Author:  Abdulrahman Salem  ***************************/
/*****************  Date:    21/5/2023          ***************************/
/*****************  version: v0.0               ***************************/
/*****************    Inheritance Project C++   ***************************/
/**************************************************************************/
#include <iostream>
#include <string>
using namespace std;

/*Material Object Class*/
class Material_Object
{
    private:
    int mass;
    string name;
    

    public:
    void Set_Name(string Local_name)
    {
        name = Local_name;
    }
    void Set_mass(int Local_mass)
    {
        mass = Local_mass;
    }

    void Display_Data(void)
    {
        cout<<"Name: "<< name<<endl;
        cout<<"Mass in kg: "<< mass<<endl;
    }
};

/*---------------------Living Thing Class from Material Object-----------------------------------------------*/
class Living_Thing: public Material_Object
{
    private: 
    
    string move;
    string breathe;
    string eat;

    public:
    void Set_eat(string Local_eat)
    {
        eat = Local_eat;
    }
    void Set_Breathe(string Local_breathe)
    {
        breathe = Local_breathe;
    }
    void Set_Move(string Local_move)
    {
        move = Local_move;
    }
    void Display_Data(void)
    {   
        Material_Object::Display_Data();
        cout<<"Breathe :"<< move<<endl;
        cout<<"Move: "<<move<<endl;
        cout<<"Eats: "<<eat<<endl;
    }


}; 
/*---------------------Non Living Thing Class from Material Object-----------------------------------------*/

class Non_Living_Thing: public Material_Object
{
    private:
    string material_type;
    string usage;
    
    public:
    void Set_material_type (string Local_material_type)
    {
        material_type = Local_material_type;
    }
    void Set_usage (string Local_usage)
    {
        usage = Local_usage;
    }
    void Display_Data(void)
    {   
        Material_Object::Display_Data();
        cout<<"Material Type :"<< material_type<<endl;
        cout<<"Usage: "<<usage<<endl;
    }

}; 
/*---------------------Animal Class from Living Thing-----------------------------------------*/
class Animal: public Living_Thing
{
    private:
    string type;
    string sound;
    string colour;

    public:
    void Set_colour(string Local_colour)
    {
        colour = Local_colour;
    }
    void Set_type(string Local_type)
    {
        type = Local_type;
    }
    void Set_sound(string Local_sound)
    {
        sound = Local_sound;
    }
    void Display_Data(void)
    {
        Living_Thing::Display_Data();
        cout<<"Type: "<<type<<endl;
        cout<<"Sound: "<<sound<<endl;
        cout<<"Colour: "<<colour<<endl;
    } 
};
/*---------------------Mammal Class from Animal-----------------------------------------*/
class Mammal: public Animal
{
    private:
    string domesticated;
    string speak;
    int age;

    public:
    void Set_Domesticated(string Local_domesticated)
    {
        domesticated = Local_domesticated;    
    }
    void Set_Speak(string Local_speak)
    {
        speak = Local_speak;
    }
    void Set_Age(int Local_Age)
    {
        age = Local_Age;
    }
    void Display_Data(void) 
    {
        Animal::Display_Data();
        cout<<"Domensticated: "<< domesticated<<endl;
        cout<<"Speaking: "<<speak<<endl;
    }
};
/*---------------------Human Being Class from Mammal-----------------------------------------*/
class Human: public Mammal
{
    private:
    string specific_name;
    string job;
    string gender;

    public:
    void Set_specific_name(string Local_sname)
    {
        specific_name = Local_sname;
    }
    void Set_job(string Local_job)
    {
        job = Local_job;
    }
    void Set_gender(string Local_gender)
    {
        gender = Local_gender;
    }
    void Display_Data(void)
    {
        Mammal::Display_Data();
        cout<<"Name: "<<specific_name<<endl;
        cout<<"Gender: "<< gender <<endl;
        cout<<"Job: "<<job<<endl;
    }
};

int main(void)
{
    Living_Thing Plant;
    Plant.Set_Name("Roses");
    Plant.Set_mass(1);
    Plant.Set_Breathe("true");
    Plant.Set_Move("false");
    Plant.Set_eat("water");
    Plant.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Non_Living_Thing Rock;
    Rock.Set_Name("Rock");
    Rock.Set_mass(23);
    Rock.Set_material_type("Solid");
    Rock.Set_usage("Construction");
    Rock.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Non_Living_Thing Air;
    Air.Set_Name("Air");
    Air.Set_mass(0);
    Air.Set_material_type("Gas");
    Air.Set_usage("Energy");
    Air.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Animal Reptile;
    Reptile.Set_Name("Crocodile");
    Reptile.Set_mass(200);
    Reptile.Set_Breathe("true");
    Reptile.Set_Move("true");
    Reptile.Set_eat("Meat");
    Reptile.Set_type("Reptile");
    Reptile.Set_sound("Grunt");
    Reptile.Set_colour("Green");
    Reptile.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Mammal Dog;
    Dog.Set_Name("Dog");
    Dog.Set_mass(15);
    Dog.Set_Breathe("true");
    Dog.Set_Move("true");
    Dog.Set_eat("Dry Food");
    Dog.Set_type("Mammal");
    Dog.Set_sound("Bark");
    Dog.Set_colour("Golden");
    Dog.Set_Domesticated("True");
    Dog.Set_Speak("false");
    Dog.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Human human1;
    human1.Set_Name("Human Being");
    human1.Set_mass(70);
    human1.Set_Breathe("true");
    human1.Set_Move("true");
    human1.Set_eat("Protien & Carbs");
    human1.Set_type("Human");
    human1.Set_sound("Speech");
    human1.Set_colour("Light Brown");
    human1.Set_Domesticated("true");
    human1.Set_Speak("true");
    human1.Set_specific_name("Ken");
    human1.Set_job("Dentist");
    human1.Set_gender("Male");
    human1.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Human human2;
    human2.Set_Name("Human Being");
    human2.Set_mass(90);
    human2.Set_Breathe("true");
    human2.Set_Move("true");
    human2.Set_eat("Vegan");
    human2.Set_type("Human");
    human2.Set_sound("Speech");
    human2.Set_colour("Brown");
    human2.Set_Domesticated("true");
    human2.Set_Speak("true");
    human2.Set_specific_name("Flo");
    human2.Set_job("ShopKeeper");
    human2.Set_gender("Female");
    human2.Display_Data();

cout<<"*********************************************************************************************"<<endl;

    Human human3;
    human3.Set_Name("Human Being");
    human3.Set_mass(65);
    human3.Set_Breathe("true");
    human3.Set_Move("true");
    human3.Set_eat("Vegan");
    human3.Set_type("Human");
    human3.Set_sound("Speech");
    human3.Set_colour("White");
    human3.Set_Domesticated("true");
    human3.Set_Speak("true");
    human3.Set_specific_name("Beth");
    human3.Set_job("Artist");
    human3.Set_gender("Female");
    human3.Display_Data();

    return 0;
}