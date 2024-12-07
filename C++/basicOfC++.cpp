#include<iostream>
#include<string>

using namespace std;

class Teacher{

public:

	Teacher(){

		// cout << " Hi, I am a Constructor \n";

		extraSubject = "Probability";
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

	//setter
	void setSallary(double s){
		salary = s;
	}

	double getSallary(){
		return salary; 
	}

};

int main(){

	Teacher t1; // Constructor Call
	

	t1.name = "Anil";
	t1.dept = "AI";
	t1.subject = "Machine Learning";

	t1.setSallary(100000);


	cout << t1.extraSubject << " "<< t1.name <<" "<< t1.getSallary()<<"\n";	


	return 0;
}

