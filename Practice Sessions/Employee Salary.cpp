#include <iostream>
using namespace std;

class Employee{
	protected:
		string name;
		int id;
	    double salary;
	    
	public:
		 Employee(string n, int i, double s) : name(n), id(i), salary(s) {
        cout << "Employee Details:  " << endl;
    }
     void displayEmployee() 
	  {
        cout << "ID: " << id << "\nName: " << name << "\nSalary: " << salary << endl;
    }
	~Employee {
	
	}
	
};

class Manager : public Employee{
	protected:
		string deparment;
		
	public:
		 
		 Manager(string n, int i, double s,string department): Employee (name(n), id(i), salary(s))
		 {
		 	
		 	void displayManager() 
			 {
        displayEmployee();
        cout << "Department: " << department << endl;
        
         } 
         }	
         ~Manager(){
		 
		 }
        
		 }

};

int main(){
	Manager obj;
	obj.displayEmployee();
	
	
}