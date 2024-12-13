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

		// this->prop is same as *(this).prop
		// Basically this will hold the addrss of the Object : Here address of t1

		this->name = name;
		this->dept = dept;
		this->subject = subject;
		this->salary = salary;


	}


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
	t1.getInfo();
	// cout << t1.extraSubject << " "<< t1.name <<" "<< t1.getSallary()<<"\n";	


	return 0;
}

