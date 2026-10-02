#include <iostream>
using namespace std;

class phone{
	private:
		int model;
		string brand;
        double phoneno;		
	public:
		
		void get_brand(){
			
			cout<<" Enter Your Brand Name :  " << endl;
			cin>> brand ;
		}
	    void get_model(){
	    	
	    	cout<<"Enter Model:  " <<endl;
	    	cin >> model ;
		}
		
		void get_phoneno(){
	    	
	    	cout<<"Enter Phone Number:  " <<endl;
	    	cin >> phoneno ;
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
