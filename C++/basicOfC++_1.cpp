#include<iostream>
#include<string>

using namespace std;

class Teacher{

public:

	// Constructor Overloading

	Teacher(){

		// cout << " Hi, I am a Constructor \n";

		extraSubject = "Probability";
	}

	Teacher(string n, string d, string s, double sal ){

		name = n;
		dept = d;
		subject = s;
		salary = sal;


	}


// attributes
private:

	double salary;

public:

	string name;
	string dept;
	string subject;
	string extraSubject;


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

