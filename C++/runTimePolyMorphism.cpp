#include<iostream>
#include<string>

using namespace std;


class Parent{

public:

	void getInfo()
	{

		cout<<"parent class\n";

	}


};


class child : public Parent{

public:

	void getInfo()
	{

		cout<<"child class\n";

	}


};

int main(){

	child c1;
	c1.getInfo();

	return 0;


}