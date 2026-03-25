#include <iostream>
#include<string>

using namespace std;


class Person {

public:

	string name;
	int age;


};

class Student : public Person{

public:

	int rollno;

};


class Teacher : public Person{

public:
	string subject;

	double salary;
};



class TA : public Student, public  Teacher{

public:

	string researchArea;
};


int main()
{

	TA t1;

	t1.name = "Anil";
	t1. subject = "Machine Learning";
	t1.researchArea = " AI and Signal Processing";

	cout << t1.name <<"\n";
	cout << t1.subject << t1.researchArea << "\n";


	return 0;

}