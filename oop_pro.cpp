#include <iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskforPromotion() = 0;
};



class Employee:AbstractEmployee  //class, a blueprint or cookie cutter , need to include abstract class
{
private: // hiding members within class, we do this to prevent mistakes
    string Name;  // these are members, try to capitcalise member variable names because it is easiler to pass parametres later.
    string Company;
    int Age;

public:  // access modifier. we cannot access these members because they are private by default, to change that, we need to do public

    // this here with setters and getters is called encapsulation, this is done to prvent mistakes and long  hours fixing, we are not modding the orginal values, we do it here
    void setName(string name){  //this is a setter, meaning that we are setting member properties to something
        Name = name;
    }

    string getName()  // this is a getter, we are just getting a member property
    {
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany()  {
        return Company;
    }

    void setAge(int age){
        if (age >= 18) // we change set rules here in our setters
        {
            Age = age;
        }

    }

    int getAge()  {
        return Age;
    }

    void IntroduceYourself()  // this is a method, essientallaly a function for a class
    {
        cout << "My name is "<< Name<<endl;
        cout << "I work at "<< Company<<endl;
        cout << "I am "<< Age << " years old"<<endl;
    }

    Employee(string name, string company, int age)  // this is a constructor, it simpliifes our member defintions, but we lose the default and now need to call it in the main fucntion
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskforPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted!"<< endl;
        }
        else
        {
            cout << Name << ", sorry No promotion for you!" << endl;
        }
    }

};

int main()
{
    Employee employee1 = Employee("Philip","UOFA", 21);  // instance of class Employee: employee1 using the constructor i made

    // employee1.Name = "Philip";  this is defintig the members using the deafult constuructor
    // employee1.Company = "UOFA";
    // employee1.Age = 21;

    //employee1.IntroduceYourself();

    Employee employee2 = Employee ("John", "Amazon", 35);
    //employee2.IntroduceYourself();

    employee1.AskforPromotion();
    employee2.AskforPromotion();

    //employee1.setAge(15);
    //cout << employee1.getName() << " is " << employee1.getAge()<< " years old."<<endl;

    return 0;


}
