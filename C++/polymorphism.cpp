#include <iostream>
#include<string>

using namespace std;


class Student{

public:

	string name;


	Student(){


		cout << "Non-parameterized \n";
	}


	Student(string name ){

		cout<<"name: "<< name;
		cout<< "parameterized \n";
	}



};


int main(){

	Student s1;

	return 0;


}