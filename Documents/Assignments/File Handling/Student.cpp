#include <iostream>
using namespace std;

class Student{
	protected:
		int rollno;
		
		public:
			
			void get_rollno()
			{
				cout<< " Enter Your Roll No: "<<endl;
				cin>> rollno;
				
			}
			
			void displayRollNo()
			{
				cout<<" Your Roll No is: "<<rollno<<endl;
				
			}
};

class sports
{
protected:
int sportmarks;

public:

void get_sportmarks()
{
cout<<"Enter Sports Marks:  "<<endl;
cin >> sportmarks;
	
}	
	void display_SportMarks()
	{
		cout<<"You have got "<<sportmarks<<" Sportmarks."<<endl;
		
	}
	
};

class text{
	protected:
		int testmarks;
		
		public:
			
			void get_textmarks()
			{
				cout<<"Enter your Test Marks:  "<< endl;
				cin>>testmarks;
				
				}	
			
			
		
	
};

class result : public Student,public text,public sports{
	protected:
		int total_marks;
	public:
		
	total_marks = testmarks + sportmarks;
	
	
		
		cout<<"Roll No : "<< rollno << " Scored Total  " << totalmarks <<endl;
	
	
};

int main()
{
result obj;

obj.displayRollNo();
obj.display_SportMarks();

cout<<	cout<<"Roll No : "<< rollno << " Scored Total  " << totalmarks <<endl;

	
};