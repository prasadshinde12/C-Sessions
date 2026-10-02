#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    
    Employee(string n, int i, double s)
        : name(n), id(i), salary(s)
    {
        cout << "Employee Constructor" << endl;
    }

    
    void displayEmployee()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "ID     : " << id << endl;
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
    }

   
    ~Employee()
    {
       // cout << "Employee Destructor" << endl;
    }
};


class Manager : public Employee
{
protected:
    string department;

public:
   
    Manager(string n, int i, double s, string d)
        : Employee(n, i, s), department(d)
    {
       // cout << "Manager Constructor" << endl;
    }

 
    void displayManager()
    {
        displayEmployee();

        cout << "Department : " << department << endl;
    }

  
    ~Manager()
    {
        //cout << "Manager Destructor" << endl;
    }
};


int main()
{
  
    Manager obj("Prasad", 101, 50000, "IT");

   
    obj.displayManager();

    return 0;
}