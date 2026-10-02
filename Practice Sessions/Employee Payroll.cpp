#include <iostream>
using namespace std;

class employee{
	private:
		int empId;
		string name;
		
	public:
		
		void get_name(){
			
			cout<<" Enter Your Name:  " << endl;
			cin>> name;
		}
	    void get_empId(){
	    	
	    	cout<<"Enter EmpId:  " <<endl;
	    	cin >> empId ;
		}
		void display_employee(){
			
			cout<<"Employee Name:  "<<name <<endl;
			cout<< "Employee ID :  "<<empId<<endl;
			
		}
};

class salary{
	protected: 
	int salary,alloance;
	
	public:
		void get_salary(){
			
			cout<<"Enter Salary: "<<endl;
			cin>> salary ;
			}
		void get_alloance(){
			cout<<"Enter Alloance : "<<endl;
			cin>> alloance ;
			
		}
		
};
class payroll : public salary,public employee{
	protected:
	float netSalary;
		
		public:
			
		
			
			void calculate_payroll(){
			return salary - alloance ;	
			 
			}
	
};

int main(){
	
	
payroll obj;
obj.get_name();
obj.get_empId();
obj.get_salary();

obj.display_employee();
obj.calculate_payroll();
	
	
	
};
