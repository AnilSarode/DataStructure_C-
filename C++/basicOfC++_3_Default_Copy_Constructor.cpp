#include<iostream>
#include<string>

using namespace std;

class Teacher{


public:

	string name;
	string dept;
	string subject;
	string extraSubject;
	// Constructor Overloading

	Teacher(){

		// cout << " Hi, I am a Constructor \n";
		//Non Parameterized

		extraSubject = "Probability";
	}

	Teacher(string name, string dept, string subject, double salary ){

		this->name = name;
		this->dept = dept;
		this->subject = subject;
		this->salary = salary;


	}

	// Teacher(Teacher &orgObj){

	// 	this->name = orgObj.name;
	// 	this->dept = orgObj.dept;
	// 	this->subject = orgObj.subject;
	// 	this->salary = orgObj.salary;


	// }

// attributes
private:

	double salary;


public:

	//Method/ Member function 

	void changeDept(string newDept){

		dept = newDept;

	}

	void getInfo(){

		cout<<"name: " << name <<"\n";
		cout<<"subject: "<< subject <<"\n";

	}

};

int main(){

	Teacher t1("Anil","AI","Machine Learning",100000); // Constructor Call
	// t1.getInfo();

	Teacher t2(t1); //Default copy constructor get invoke// This will create the same copy as t1 object
	t2.getInfo();


	return 0;
}

